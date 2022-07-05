#include <iostream>

extern void passorfail(char grade);

int main()
{
    char grade = 'F';
    passorfail(grade);
    return (0);
}