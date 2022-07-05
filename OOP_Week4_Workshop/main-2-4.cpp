#include <iostream>
#include <string>

extern float add_op(float left, float right);
extern float subtract_op(float left, float right);
extern float multiply_op(float left, float right);
extern float arithmetic_ops(float left, float right, float (*op)(float, float));

int main()
{
    float left = 3;
    float right = 5;

    std::cout << arithmetic_ops(left, right, &multiply_op) << std::endl;
    return (0);
}