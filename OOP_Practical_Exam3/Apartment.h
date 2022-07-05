#ifndef APARTMENT_H
#define APARTMENT_H

#include <iostream>
#include <string>
#include "Unit.h"
#include "Apartment.h"

class Apartment:Unit{
public:
    Apartment();  // default constructor allocates capacity for 10 units
    Unit *Apartment1;
    int max_capacity;
    int current_population;
    Apartment(int capacity);  // constructor for Apartment with given num units
    int get_capacity();  // returns the  number of units allowed

    // returns the current number of units in the apartment
    int get_current_number_of_units(); 

    // returns a dynamic array of the units in the apartment
    Unit *get_contents();

    // returns true and adds unit to the condo if there is sufficient space
    // otherwise returns false
    bool add_unit(Unit unit);

    // destructor
    ~Apartment();
};

#endif