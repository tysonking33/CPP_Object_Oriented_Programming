#include "Orchestra.h"
#include "Musician.h"
#include <string>
#include <iostream>

Orchestra::Orchestra(){
    // default constructor
    orchestra_size = 0;
}

Orchestra::Orchestra(int size){
    // constructor for an orchestra of given size
    orchestra_size = size;
    current_orchestra_size = 0;
    Array1 = new Musician[orchestra_size];
}

// returns the number of musicians who have joined the orchestra
int Orchestra::get_current_number_of_members(){
    return current_orchestra_size;
} 

// returns true if any musician in the orchestra plays the specified instrument
// otherwise returns false
bool Orchestra::has_instrument(std::string instrument){
    //outcome = false;
    for (int i = 0; i <= orchestra_size; i++){
        if (Array1[i].musician_instrument == instrument){
            //outcome = true;
            return true;
        }
    }
    return false;
} 

Musician *Orchestra::get_members(){
    // returns the array of members of the orchestra
    return Array1;
}

bool Orchestra::add_musician(Musician new_musician){
    // returns true and adds new musician to the orchestra if the orchestra is not full
    // otherwise returns false
    bool not_full = false;
    if (current_orchestra_size < orchestra_size){
        not_full = true;
        Array1[current_orchestra_size] = new_musician;
        current_orchestra_size++;

        return not_full;
    }
    return not_full;
}

Orchestra::~Orchestra(){
}