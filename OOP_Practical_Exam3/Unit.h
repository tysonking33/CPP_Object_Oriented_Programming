#ifndef UNIT_H
#define UNIT_H

#include <iostream>
#include <string>
#include "Unit.h"

class Unit{
public:
    Unit();          // a default constructor 
    int bedrooms;
    double area;
    int price;
    Unit(int bedroom_number, double square_metres, int dollar_values); // a constructor that takes: the number of bedrooms,
                        //number of square meters, and value in dollars as parameters

    int get_bedrooms();  // returns the number of bedrooms for the unit
    int get_value();    // returns the value in dollars of the Unit
    double get_area();    // returns the number of square meters in the unit
};

#endif
