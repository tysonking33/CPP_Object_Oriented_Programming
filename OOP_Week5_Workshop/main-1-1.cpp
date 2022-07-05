#include <iostream>

extern int *readNumbers();
extern void printNumbers(int *numbers,int length);

int main()
{
    int length = 10;

    printNumbers(readNumbers(), length);
    return (0);
}