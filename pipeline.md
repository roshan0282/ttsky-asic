# 1 - Primitive Floating Point Operations

## 1.1 - Fixed Compare

## 1.2 - Fixed Addition/Subtraction

## 1.3 - Fixed Multiplcation

## 1.4 - Fixed Division

## 1.5 - Fixed Dot Product

# 2 - Ray Tracing Pipeline Operations

The sections below outline the primitive arithmetic operations required to compute the desired result. We will define the ray vector as:

<p style="text-align:center;">
    <b>P(t)</b> = <b>Origin</b> + t × <b>Direction</b> = <b>O</b> + t × <b>D</b>
</p>

where t is a scalar parameter that denotes how far along the ray a point is.

## 2.1 - Ray Plane Intersect

A plane is defined by its normal vector **N** and one of its points **Q** such that we obtain the equation:

<p style="text-align:center;">
    <b>N</b> $\cdot$ <b>Q</b> = d
</p>

If we substitute the ray vector into the point vector **Q**, we can solve for a potential intersection via isolating for t

<p style="text-align:center;">
    t = (d - <b>N</b> $\cdot$ <b>O</b>) / (<b>N</b> $\cdot$ <b>D</b>)
</p>

In terms of hardware, this requires the following primitive operations:

1. Two **Fixed Dot Products** (each require 3 multiplies + 2 adds)
2. One **Fixed Subtraction**
3. One **Fixed Division**

## 2.2 - Ray Sphere Intersect

## 2.3 - Plane Effect

## 2.4 - Sphere Effect