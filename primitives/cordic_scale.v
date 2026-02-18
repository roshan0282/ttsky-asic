module cordic_scale #(
    parameter WIDTH = 16,         // Bit width for input/output values
    parameter FRAC_BITS = 12,     // Number of fractional bits
    parameter STAGES = 12,        // Number of pipeline stages (should match CORDIC)
    parameter CODE_WIDTH = 8      // Width of the code to pass through
) (
    input  clock,
    input  reset,
    
    // Input value to scale
    input  signed [WIDTH-1:0] value_in,
    
    // Pass-through signals
    input  [CODE_WIDTH-1:0] code_in,
    input  valid_in,
    
    // Output scaled value
    output signed [WIDTH-1:0] value_out,
    
    // Pass-through outputs
    output [CODE_WIDTH-1:0] code_out,
    output valid_out
);

    // CORDIC gain K ≈ 1.646760258121...
    // We need to multiply by 1/K ≈ 0.607252935...
    // In fixed-point with FRAC_BITS fractional bits:
    // 1/K * 2^FRAC_BITS = 0.607252935 * 2^12 = 2487.95... ≈ 2488
    
    localparam signed [WIDTH-1:0] INV_K = 16'sd2488;  // 1/K scaled by 2^12
    
    // Pipeline registers
    reg signed [WIDTH-1:0] value_pipe [0:STAGES];
    reg [CODE_WIDTH-1:0] code_pipe [0:STAGES];
    reg valid_pipe [0:STAGES];
    
    // Multiplication result (needs double width to avoid overflow)
    wire signed [2*WIDTH-1:0] product;
    wire signed [WIDTH-1:0] scaled_value;
    
    // Perform the multiplication
    assign product = value_in * INV_K;
    
    // Extract the properly scaled result by shifting right by FRAC_BITS
    // This brings us back to the correct fixed-point format
    assign scaled_value = product >>> FRAC_BITS;
    
    integer i;
    
    // Pipeline stages to match CORDIC delay
    always @(posedge clock or posedge reset) begin
        if (reset) begin
            // Reset all pipeline stages
            for (i = 0; i <= STAGES; i = i + 1) begin
                value_pipe[i] <= 0;
                code_pipe[i] <= 0;
                valid_pipe[i] <= 0;
            end
        end else begin
            // Stage 0: Load scaled input
            value_pipe[0] <= scaled_value;
            code_pipe[0] <= code_in;
            valid_pipe[0] <= valid_in;
            
            // Remaining stages: Simple delay pipeline to match CORDIC
            for (i = 0; i < STAGES; i = i + 1) begin
                value_pipe[i+1] <= value_pipe[i];
                code_pipe[i+1] <= code_pipe[i];
                valid_pipe[i+1] <= valid_pipe[i];
            end
        end
    end
    
    // Outputs from final stage
    assign value_out = value_pipe[STAGES];
    assign code_out = code_pipe[STAGES];
    assign valid_out = valid_pipe[STAGES];

endmodule
