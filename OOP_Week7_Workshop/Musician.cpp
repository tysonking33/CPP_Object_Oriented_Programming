#include "Musician.h"
#include <string>
#include <iostream>

using namespace std;

Musician::Musician(){
    // a default constructor 
    // a constructor that takes the instrument played and the years of experience
    musician_instrument = "cello";
    musician_experience = 0;
}                  
Musician::Musician(std::string instrument, int experience){
    musician_instrument = instrument;
    musician_experience = experience;
}      
string Musician::get_instrument(){
    // returns the instrument played
    return musician_instrument;
}
int Musician::get_experience(){
    // returns the number of years experience
    return musician_experience;
}

/*Musician::~Musician(){
    //A default destructor
}*/