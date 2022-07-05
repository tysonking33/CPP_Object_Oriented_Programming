#include <iostream>
#include <string>
#include "meerkat.h"

//default meerkat
meerkat::meerkat()                      // no name or age is required to create a meerkat
{
    name = "steve";
    age = 12;
}
meerkat::meerkat(string nameInput, int ageInput)                      // no name or age is required to create a meerkat
{
    name = nameInput;
    age = ageInput;
}
void meerkat::setName(string meerName)   // change the meerkat's name
{
    name = meerName;
}
string meerkat::getName()
{
    return name;
}
void meerkat::setAge(int meerAge)        // change the meerkat's age
{
    age = meerAge;
}
int meerkat::getAge()
{
    return age;
}