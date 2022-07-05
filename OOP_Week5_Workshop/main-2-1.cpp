#include <iostream>

extern int *readNumbers();
extern void hexDigits(int *numbers,int length);

int main()
{
    int length = 10;

    hexDigits(readNumbers(), length);
    return (0);
}