// timerDisplay - writes HH:MM:SS.SSSSS to character RAM
// Top-right corner: row 0, columns 66-79  (addresses 66..79)
module timerDisplay(
    input clock50MHz,
    input resetn,
    input [5:0] hours,
    input [5:0] minutes,
    input [5:0] seconds,
    input [16:0] subSeconds,   // 0-99999 (5 decimal digits)
    output reg charRamWrEn,
    output reg [12:0] charRamAddr,
    output reg [6:0] charRamData
);
    // state machine
    reg [3:0] writeIndex;
    reg [3:0] state;

    localparam IDLE        = 4'd0;
    localparam WRITE_TIMER = 4'd1;

    // update ~62.5 Hz at 50 MHz  (50_000_000 / 800_000)
    reg [19:0] updateCounter;

    function [6:0] digitToAscii;
        input [3:0] digit;
        digitToAscii = 7'd48 + digit;  // '0' = ASCII 48
    endfunction

    // extract 5 sub-second digits
    wire [3:0] subSec10000 = subSeconds / 17'd10000;
    wire [16:0] subSecRem1 = subSeconds % 17'd10000;
    wire [3:0] subSec1000  = subSecRem1 / 17'd1000;
    wire [16:0] subSecRem2 = subSecRem1 % 17'd1000;
    wire [3:0] subSec100   = subSecRem2 / 17'd100;
    wire [16:0] subSecRem3 = subSecRem2 % 17'd100;
    wire [3:0] subSec10    = subSecRem3 / 17'd10;
    wire [3:0] subSec1     = subSecRem3 % 17'd10;

    always @(posedge clock50MHz) begin
        if (!resetn) begin
            state         <= IDLE;
            writeIndex    <= 4'd0;
            charRamWrEn   <= 1'b0;
            updateCounter <= 20'd0;
        end else begin
            case (state)
                IDLE: begin
                    charRamWrEn <= 1'b0;
                    if (updateCounter == 20'd799999) begin
                        updateCounter <= 20'd0;
                        state         <= WRITE_TIMER;
                        writeIndex    <= 4'd0;
                    end else begin
                        updateCounter <= updateCounter + 20'd1;
                    end
                end

                WRITE_TIMER: begin
                    // row 0, columns 66-79: "HH:MM:SS.SSSSS" (14 chars)
                    charRamWrEn <= 1'b1;
                    case (writeIndex)
                        4'd0:  begin charRamAddr <= 13'd66; charRamData <= digitToAscii(hours / 6'd10);    writeIndex <= writeIndex + 4'd1; end
                        4'd1:  begin charRamAddr <= 13'd67; charRamData <= digitToAscii(hours % 6'd10);    writeIndex <= writeIndex + 4'd1; end
                        4'd2:  begin charRamAddr <= 13'd68; charRamData <= 7'd58; /* ':' */                writeIndex <= writeIndex + 4'd1; end
                        4'd3:  begin charRamAddr <= 13'd69; charRamData <= digitToAscii(minutes / 6'd10);  writeIndex <= writeIndex + 4'd1; end
                        4'd4:  begin charRamAddr <= 13'd70; charRamData <= digitToAscii(minutes % 6'd10);  writeIndex <= writeIndex + 4'd1; end
                        4'd5:  begin charRamAddr <= 13'd71; charRamData <= 7'd58; /* ':' */                writeIndex <= writeIndex + 4'd1; end
                        4'd6:  begin charRamAddr <= 13'd72; charRamData <= digitToAscii(seconds / 6'd10);  writeIndex <= writeIndex + 4'd1; end
                        4'd7:  begin charRamAddr <= 13'd73; charRamData <= digitToAscii(seconds % 6'd10);  writeIndex <= writeIndex + 4'd1; end
                        4'd8:  begin charRamAddr <= 13'd74; charRamData <= 7'd46; /* '.' */                writeIndex <= writeIndex + 4'd1; end
                        4'd9:  begin charRamAddr <= 13'd75; charRamData <= digitToAscii(subSec10000);      writeIndex <= writeIndex + 4'd1; end
                        4'd10: begin charRamAddr <= 13'd76; charRamData <= digitToAscii(subSec1000);       writeIndex <= writeIndex + 4'd1; end
                        4'd11: begin charRamAddr <= 13'd77; charRamData <= digitToAscii(subSec100);        writeIndex <= writeIndex + 4'd1; end
                        4'd12: begin charRamAddr <= 13'd78; charRamData <= digitToAscii(subSec10);         writeIndex <= writeIndex + 4'd1; end
                        4'd13: begin
                            charRamAddr <= 13'd79;
                            charRamData <= digitToAscii(subSec1);
                            writeIndex  <= 4'd0;
                            state       <= IDLE;
                        end
                        default: begin state <= IDLE; charRamWrEn <= 1'b0; end
                    endcase
                end

                default: begin
                    state       <= IDLE;
                    charRamWrEn <= 1'b0;
                end
            endcase
        end
    end
endmodule
