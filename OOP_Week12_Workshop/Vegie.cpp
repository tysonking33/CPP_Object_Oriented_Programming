#include "Vegie.h"
#include "Animal.h"
#include <iostream>
#include <string>

using namespace std;

vegie::vegie(string n,int v): animal(n, v){
    // create a vegie with name n and body volume 
    name = n;
    volume = v;
    animalID = 100;
    favourite_food = "grass";
}
void vegie::set_favourite_food(string new_favourite_food){
    favourite_food = new_favourite_food;
}
string vegie::get_favourite_food(){
    std::string safeword = "Safe .";
    std::string fav_food_string = safeword + favourite_food;
    return (fav_food_string);
}