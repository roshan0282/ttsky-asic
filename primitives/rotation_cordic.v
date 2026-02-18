module rotation_cordic #(
    parameter WIDTH = 16,         // Bit width for x, y coordinates (with fractional bits)
    parameter FRAC_BITS = 12,     // Number of fractional bits
    parameter STAGES = 12,        // Number of CORDIC iterations/pipeline stages
    parameter CODE_WIDTH = 8      // Width of the code to pass through
) (
    input  clock,
    input  reset,
    
    // Input vector
    input  signed [WIDTH-1:0] x_in,
    input  signed [WIDTH-1:0] y_in,
    input  signed [WIDTH-1:0] angle_in,  // Target rotation angle
    
    // Pass-through signals
    input  [CODE_WIDTH-1:0] code_in,
    input  valid_in,
    
    // Output rotated vector
    output signed [WIDTH-1:0] x_out,
    output signed [WIDTH-1:0] y_out,
    
    // Pass-through outputs
    output [CODE_WIDTH-1:0] code_out,
    output valid_out
);

    // CORDIC gain K ≈ 1.646760258... 
    // The output will be scaled by K, which should be compensated using cordic_scale module
    
    // Arctan lookup table (in fixed-point format with FRAC_BITS fractional bits)
    // atan(2^-i) for i = 0 to STAGES-1
    // Scaled by 2^FRAC_BITS
    function signed [WIDTH-1:0] atan_lut;
        input integer stage;
        reg signed [WIDTH-1:0] atan_values [0:15];
        begin
            // Precomputed atan(2^-i) * 2^12 for FRAC_BITS=12
            atan_values[0]  = 16'sd3217;   // atan(1.0) = 45° = 0.7854 rad
            atan_values[1]  = 16'sd1900;   // atan(0.5) = 26.565°
            atan_values[2]  = 16'sd1006;   // atan(0.25)
            atan_values[3]  = 16'sd511;    // atan(0.125)
            atan_values[4]  = 16'sd256;    // atan(0.0625)
            atan_values[5]  = 16'sd128;    // atan(0.03125)
            atan_values[6]  = 16'sd64;     // atan(0.015625)
            atan_values[7]  = 16'sd32;     // atan(0.0078125)
            atan_values[8]  = 16'sd16;     // atan(0.00390625)
            atan_values[9]  = 16'sd8;      // atan(0.001953125)
            atan_values[10] = 16'sd4;      // atan(0.0009765625)
            atan_values[11] = 16'sd2;      // atan(0.00048828125)
            atan_values[12] = 16'sd1;      // atan(0.000244140625)
            atan_values[13] = 16'sd1;      // atan(0.0001220703125)
            atan_values[14] = 16'sd0;      // atan(0.00006103515625)
            atan_values[15] = 16'sd0;      // atan(0.000030517578125)
            
            if (stage < 16)
                atan_lut = atan_values[stage];
            else
                atan_lut = 16'sd0;
        end
    endfunction

    // Pipeline registers for each stage
    // Stage 0 is the input, stages 1 to STAGES are the iterations
    reg signed [WIDTH-1:0] x_pipe [0:STAGES];
    reg signed [WIDTH-1:0] y_pipe [0:STAGES];
    reg signed [WIDTH-1:0] angle_pipe [0:STAGES];
    reg [CODE_WIDTH-1:0] code_pipe [0:STAGES];
    reg valid_pipe [0:STAGES];
    
    integer i;
    
    // Intermediate signals for each stage
    wire signed [WIDTH-1:0] x_shifted [0:STAGES-1];
    wire signed [WIDTH-1:0] y_shifted [0:STAGES-1];
    wire direction [0:STAGES-1];  // Rotation direction based on angle comparison
    
    // Generate shifted values and direction signals for each stage
    genvar stage;
    generate
        for (stage = 0; stage < STAGES; stage = stage + 1) begin : cordic_stage
            // Shift by stage amount (arithmetic right shift for signed)
            assign x_shifted[stage] = x_pipe[stage] >>> stage;
            assign y_shifted[stage] = y_pipe[stage] >>> stage;
            
            // Direction based on angle comparison:
            // If angle_pipe < 0, we need to rotate clockwise (direction=0)
            // If angle_pipe >= 0, we need to rotate counter-clockwise (direction=1)
            assign direction[stage] = ~angle_pipe[stage][WIDTH-1];  // Invert sign bit
        end
    endgenerate
    
    // Pipeline stages
    always @(posedge clock or posedge reset) begin
        if (reset) begin
            // Reset all pipeline stages
            for (i = 0; i <= STAGES; i = i + 1) begin
                x_pipe[i] <= 0;
                y_pipe[i] <= 0;
                angle_pipe[i] <= 0;
                code_pipe[i] <= 0;
                valid_pipe[i] <= 0;
            end
        end else begin
            // Stage 0: Load inputs
            x_pipe[0] <= x_in;
            y_pipe[0] <= y_in;
            angle_pipe[0] <= angle_in;
            code_pipe[0] <= code_in;
            valid_pipe[0] <= valid_in;
            
            // Stages 1 to STAGES: CORDIC iterations
            for (i = 0; i < STAGES; i = i + 1) begin
                // Rotation mode: rotate by angle to reach target
                // If remaining angle is positive, rotate counter-clockwise
                // If remaining angle is negative, rotate clockwise
                
                if (direction[i]) begin
                    // angle >= 0: rotate counter-clockwise
                    x_pipe[i+1] <= x_pipe[i] - y_shifted[i];
                    y_pipe[i+1] <= y_pipe[i] + x_shifted[i];
                    angle_pipe[i+1] <= angle_pipe[i] - atan_lut(i);
                end else begin
                    // angle < 0: rotate clockwise
                    x_pipe[i+1] <= x_pipe[i] + y_shifted[i];
                    y_pipe[i+1] <= y_pipe[i] - x_shifted[i];
                    angle_pipe[i+1] <= angle_pipe[i] + atan_lut(i);
                end
                
                // Pass through code and valid
                code_pipe[i+1] <= code_pipe[i];
                valid_pipe[i+1] <= valid_pipe[i];
            end
        end
    end
    
    // Outputs from final stage
    assign x_out = x_pipe[STAGES];
    assign y_out = y_pipe[STAGES];
    assign code_out = code_pipe[STAGES];
    assign valid_out = valid_pipe[STAGES];

endmodule
