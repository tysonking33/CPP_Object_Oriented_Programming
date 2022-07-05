#include "hunter.h"
#include "animal.h"
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
void hunter::set_kills(int kill_number){
    kills = kill_number;
}
int hunter::get_kills(){
    return kills;
}
std::string hunter::get_name(){
    std::string starter = "Hunter: ";
    std::string name_return = starter + name;
    return name_return;
}