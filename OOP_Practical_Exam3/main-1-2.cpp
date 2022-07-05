#include <iostream>
#include <string>
#include "Unit.h"
#include "Apartment.h"

using namespace std;

int main(){
    Unit *Unit1;
    Unit1 = new Unit(3, 12.4, 10000);

    Apartment *Apartment1;
    Apartment1 = new Apartment(2);
    cout << "current capacity is: " << Apartment1->get_capacity() << endl;
    cout << "current number of units is: " << Apartment1->get_current_number_of_units() << endl;
    cout << "dynamic array of units in the apartment: " << Apartment1->get_contents() << endl;
    Apartment1->add_unit(*Unit1);
    cout << "current number of units is: " << Apartment1->get_current_number_of_units() << endl;
    cout << "dynamic array of units in the apartment: " << Apartment1->get_contents() << endl;
    
    return 0;
}