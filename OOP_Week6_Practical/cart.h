#ifndef CART_H
#define CART_H

#include <iostream>
#include <string>
#include "meerkat.h"

using namespace std;

class cart
{
public:
    cart();                         // create an empty cart object
    int kat_count;
    bool addMeerkat(meerkat cat);   // adds a meerkat to the cart, returns false if full
    int kat_nbr;
    bool added;
    meerkat meerkat_array[4];
    meerkat empty_meerkat[4];
    void emptyCart();               // remove all meerkats from the cart
    void printMeerkats();           // print the name, a space, the age, then a new line
                                    // for each meerkat in the order they were added
};

#endif