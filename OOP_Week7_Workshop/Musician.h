#ifndef MUSICIAN_H
#define MUSICIAN_H

#include "Musician.h"
#include <string>
#include <iostream>

using namespace std;

class Musician{
public:
    Musician();                  // a default constructor 
    // a constructor that takes the instrument played and the years of experience
    string musician_instrument;
    int musician_experience;
    Musician(std::string instrument, int experience); 

    std::string get_instrument();    // returns the instrument played
    int get_experience();       // returns the number of years experience
    //~Musician();                //A default destructor
};

#endif //MUSICIAN_H