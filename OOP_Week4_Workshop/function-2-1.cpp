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

float arithmetic_ops(float left, float right, std::string op)
{
    float result = 0;
    if (op == "+")
    {
        result = add_op(left, right);
    }
    else if (op == "-")
    {
        result = subtract_op(left, right);
    }
    return (result);
}