module asic(
    input [7:0] in,
    output [7:0] out
);
wire [9:0] xOrd;
wire [9:0] yOrd;
wire [7:0] red, green, blue;

timerCore core (
    .clk(1'b0),
    .rst_n(1'b1),
    .xOrd(10'd523),
    .yOrd(10'd187),
    .visible(1'b1),
    .red(red),
    .green(green),
    .blue(blue)
);

assign out [7:4] = xOrd [3:0];
endmodule