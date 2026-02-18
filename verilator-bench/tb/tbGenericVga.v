// generic testbench wrapper for VGA projects - verilator compatible
// this testbench generates VGA timing and instantiates a core module
// the core module should output 8-bit RGB colors given x/y/visible inputs
module tbGenericVga(
    // clock and reset (exposed as ports for verilator)
    input clock50MHz,
    input resetn,
    
    // VGA outputs (exposed for C++ to read)
    output hSync,
    output vSync,
    output [9:0] xOrd,
    output [9:0] yOrd,
    output visible,
    output [7:0] red,
    output [7:0] green,
    output [7:0] blue
);
    // vga timing counters
    reg [9:0] xReg, yReg;
    reg hSyncReg, vSyncReg, visibleReg;
    
    // vga 640x480 @ 60hz timing (full horizontal: 800, full vertical: 525)
    always @(posedge clock50MHz) begin
        if (!resetn) begin
            xReg <= 10'd0;
            yReg <= 10'd0;
            hSyncReg <= 1'b1;
            vSyncReg <= 1'b1;
            visibleReg <= 1'b0;
        end else begin
            // horizontal counter: 0-799
            if (xReg == 10'd799) begin
                xReg <= 10'd0;
                // vertical counter: 0-524
                if (yReg == 10'd524)
                    yReg <= 10'd0;
                else
                    yReg <= yReg + 10'd1;
            end else begin
                xReg <= xReg + 10'd1;
            end
            
            // hsync pulse: active low during sync period (656-751)
            hSyncReg <= (xReg >= 10'd656 && xReg < 10'd752) ? 1'b0 : 1'b1;
            // vsync pulse: active low during sync period (490-491)
            vSyncReg <= (yReg >= 10'd490 && yReg < 10'd492) ? 1'b0 : 1'b1;
            // visible region: first 640x480 pixels
            visibleReg <= (xReg < 10'd640 && yReg < 10'd480);
        end
    end
    
    // expose timing signals
    assign hSync = hSyncReg;
    assign vSync = vSyncReg;
    assign xOrd = xReg;
    assign yOrd = yReg;
    assign visible = visibleReg;
    
    // instantiate the design under test using TOP_MODULE define
    // DUT should take x, y, visible and output 8-bit RGB
    `ifdef TOP_MODULE
        `TOP_MODULE dut (
    `else
        vgaCore dut (
    `endif
        .clk(clock50MHz),
        .rst_n(resetn),
        .pixel_x(xReg),
        .pixel_y(yReg),
        .pixel_valid(visibleReg),
        .rgb_r(red),
        .rgb_g(green),
        .rgb_b(blue)
    );
endmodule
