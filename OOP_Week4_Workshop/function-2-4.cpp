#include <iostream>
#include <string>

float add_op(float left, float right)
{
    float sum = 0;
    sum  = left + right;
    return (sum);
}

float subtract_op(float left, float right)
{
    float diff = 0;
    diff = left - right;
    return (diff);
}

float multiply_op(float left, float right)
{
    float product = 0;
    product = left * right;
    return (product);
}

// function pointer = float (*op)(float, float)

float arithmetic_ops(float left, float right, float (*op)(float, float))
{
    return (*op)(left, right);
}