#include <iostream>
#include <string>
#include "Unit.h"

using namespace std;

int main(){
    Unit *Unit1;
    Unit1 = new Unit(3, 12.4, 10000);
    cout << Unit1->get_bedrooms() << endl; 
    cout << Unit1->get_value() << endl;
    cout << Unit1->get_area() << endl;
    return 0;
}