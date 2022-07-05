#include "zoo.h"
#include "hunter.h"
#include "vegie.h"
#include "animal.h"
#include <iostream>
#include <string>

using namespace std;


zoo::zoo(string n,int cows,int lions){
    // create a zoo with the given number of cows and lions
    for (int cow_ctr = 0; cow_ctr < cows; cow_ctr++){
        vegie *cow = new vegie("Daisy", 100);
    }
    for (int lion_ctr = 0; lion_ctr < lions; lion_ctr++){
        hunter *lion = new hunter("Clarence", 50);
    }
    name = n;
    number_of_animals = cows + lions;
}



std::string zoo::get_name(){
    return number_of_animals;
}

hunter zoo::*get_lions(){
    return lion;
}

vegie zoo::*get_cows(){
    return cow;
}