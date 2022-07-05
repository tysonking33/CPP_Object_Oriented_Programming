#include "Animal.h"
#include <iostream>
#include <string>

using namespace std;

animal::animal(string n, int v){
    // creates an animal with name n and body volume v.
    // animals are allocated a unique ID on creation
    name = n;
    volume = v;
    animalID = 0;

}
void animal::set_name(std::string animal_name){
    name = animal_name;

}
void animal::set_volume(int vlum){
    volume = vlum;
}

std::string animal::get_name(){
    return name;
}
int animal::get_animalID(){
    return animalID;

}
int animal::get_volume(){
    return volume;
}