#include <iostream>
#include <string>
#include "meerkat.h"
#include "cart.h"

using namespace std;

cart::cart()                         // create an empty cart object
{
    kat_count = 0;
}
bool cart::addMeerkat(meerkat cat)   // adds a meerkat to the cart, returns false if full
{
    if (kat_count < 4)
    {
        meerkat_array[kat_count] = cat;
        kat_count++;
        added = true;
    }
    else if (kat_count = 4)
    {
        added = false;
        return added;
    }
    else if (kat_count > 4)
    {
        added = false;
        return added;
    }
    return added;
}
void cart::emptyCart()               // remove all meerkats from the cart
{
    kat_count = 0;
    meerkat_array[4] = empty_meerkat[4];
}
void cart::printMeerkats()           // print the name, a space, the age, then a new line
                                // for each meerkat in the order they were added
{
    for (int a = 0; a < 4; a++)
    {
        std::cout << meerkat_array[a].getName() << " " << meerkat_array[a].getAge() << endl;
    }
}