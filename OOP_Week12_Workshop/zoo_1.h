#ifndef ZOO_H
#define ZOO_H

#include "animal.h"
#include <iostream>
#include <string>

using namespace std;

class zoo: public animal{
private:
    string name ;                          // the zoo's name
    int number_of_animals ;                // the number of animals in the zoo
    animal **animals ;                      // the zoo's animals

public:
    zoo(string n,int cows,int lions);      // create a zoo with the given number of cows and lions
    std::string get_name();
    int get_number_of_animals();
    hunter get_lions();
    vegie get_cows();   
};

#endif