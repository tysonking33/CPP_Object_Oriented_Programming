#ifndef HUNTER_H
#define HUNTER_H

#include "animal.h"
#include <iostream>
#include <string>

using namespace std;

class hunter: public animal{
private:
    string name;              // the animal's name
    int volume;               // the volume of the animal's body
    int kills ;               // how many kills have been recorded, initialised to 0
    static int nextID ;
public:
    hunter(string n, int v);  // create a hunter with name n and body volume v
    void set_kills(int kill_number);
    int get_kills();
    std::string get_name();
};

#endif