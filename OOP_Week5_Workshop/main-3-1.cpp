#include <iostream>

extern int *readNumbers();
extern bool equalsArray(int *numbers1,int *numbers2,int length);

int main()
{
    int length = 10;
    std::cout << equalsArray(readNumbers(), readNumbers(), length) << std::endl;
    return (0);
}
