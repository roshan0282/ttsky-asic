module fixed_vec3_normalize #(parameter WIDTH = 12) (
    input  signed [WIDTH-1:0] x, y, z,
    output signed [WIDTH-1:0] nx, ny, nz
);
    // TODO(primitives): implement normalize(v)=v/|v| using fixed_point_sqrt + fixed_point_div.
    // TODO(primitives): handle zero-length vector safely.
    assign nx = 0;
    assign ny = 0;
    assign nz = 0;
endmodule
