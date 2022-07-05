#include "vegie.h"
#include "animal.h"
#include <iostream>
#include <string>

using namespace std;

int main(){
    vegie *vegie1 = new vegie("speve", 3);
    vegie1->set_favourite_food("carrot");
    cout << "Animal id: " << vegie1->get_animalID() << endl;
    cout << "Favourite food: " << vegie1->get_favourite_food() << endl;
    cout << "Name: " << vegie1->get_name() << endl;
    cout << "Volume: " << vegie1->get_volume() << endl;
    return 0;
}