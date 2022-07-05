#ifndef VEGIE_H
#define VEGIE_H

#include "animal.h"
#include <iostream>
#include <string>

using namespace std;

class vegie: public animal{
private:
    string name;              // the animal's name
    int volume;               // the volume of the animal's body
    string favourite_food ;     // the vegie's favourite food, initialise to "grass"
    static int nextID ;
public:
    vegie(string n,int v);      // create a vegie with name n and body volume v
    void set_favourite_food(string new_favourite_food);
    string get_favourite_food();

};

#endif