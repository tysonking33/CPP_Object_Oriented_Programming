#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>
#include <string>

using namespace std;

class animal{
protected:
    string name;              // the animal's name
    int animalID;             // the animal's unique ID
    int volume;               // the volume of the animal's body
public:
    animal(string n, int v);  // creates an animal with name n and body volume v.
                           // animals are allocated a unique ID on creation
    void set_name(std::string animal_name);
    void set_volume(int vlum);

    virtual std::string get_name();
    int get_animalID();
    int get_volume();

};

#endif