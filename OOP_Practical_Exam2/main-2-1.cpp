#include <iostream>

extern int lookup_fishing_fine(int over);

int main()
{
    int over = 12;
    std::cout << lookup_fishing_fine(over) << std::endl;

    return (0);
}
