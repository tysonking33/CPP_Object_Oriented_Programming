#include "animal.h"
#include <iostream>
#include <string>

using namespace std;

int main(){
    animal *Dino = new animal("Dino", 3);
    std::cout << "This animal is a: " << Dino->get_name() << std::endl;
    std::cout << "This animal has a volume of: " << Dino->get_volume() << std::endl;
    std::cout << "The animal's ID is: " << Dino->get_animalID() << std::endl;

    Dino->set_name("Sosa");
    Dino->set_volume(13);

    std::cout << "This animal is a: " << Dino->get_name() << std::endl;
    std::cout << "This animal has a volume of: " << Dino->get_volume() << std::endl;
    std::cout << "The animal's ID is: " << Dino->get_animalID() << std::endl;
    return 0;
}