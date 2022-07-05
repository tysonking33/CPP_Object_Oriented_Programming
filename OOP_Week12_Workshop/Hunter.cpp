#include "Hunter.h"
#include "Animal.h"
#include <iostream>
#include <string>

using namespace std;

hunter::hunter(string n, int v): animal(n, v){
    // create a hunter with name n and body volume v
    name = n;
    volume = v;
    kills = 0;
    animalID = 1000;
}
void hunter::set_kills(){
    kills++;
}
int hunter::get_kills(){
    return kills;
}
std::string hunter::get_name(){
    return name;
}