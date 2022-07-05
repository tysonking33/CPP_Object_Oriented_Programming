#include <iostream>
#include <string>
#include "Unit.h"
#include "Apartment.h"


Apartment::Apartment(){
    // default constructor allocates capacity for 10 units
    Apartment1 = new Unit[10];
    max_capacity = 10;
    current_population = 0;
}

Apartment::Apartment(int capacity){
    // constructor for Apartment with given num units
    if (capacity > 0){
        max_capacity = capacity;
    }
    else{
        max_capacity = 10;
    }
    current_population = 0;
    Apartment1 = new Unit[max_capacity];
}

int Apartment::get_capacity(){
    // returns the  number of units allowed
    return max_capacity;
}

// returns the current number of units in the apartment
int Apartment::get_current_number_of_units(){
    return current_population;
} 

// returns a dynamic array of the units in the apartment
Unit *Apartment::get_contents(){
    return Apartment1;
}

// returns true and adds unit to the condo if there is sufficient space
// otherwise returns false
bool Apartment::add_unit(Unit unit){
    if (current_population < max_capacity){
        Apartment1[current_population] = unit;
        current_population++;
        return true;
    }
    return false;
}

// destructor
Apartment::~Apartment(){
}