#include "hunter.h"
#include "animal.h"
#include <iostream>
#include <string>

using namespace std;

int main(){
    hunter *hunter1 = new hunter("Steve the hunter", 60);
    std::cout << "Hunter animalID: " << hunter1->get_animalID() << std::endl;
    std::cout << "Hunter kills: " << hunter1->get_kills() << std::endl;
    std::cout << "Hunter name: " << hunter1->get_name() << std::endl;
    std::cout << "Hunter volume: " << hunter1->get_volume() << std::endl;

    hunter1->set_kills();
    hunter1->set_name("speve");
    hunter1->set_volume(300);

    std::cout << std::endl;
    std::cout << std::endl;
    std::cout << "Hunter animalID: " << hunter1->get_animalID() << std::endl;
    std::cout << "Hunter kills: " << hunter1->get_kills() << std::endl;
    std::cout << "Hunter name: " << hunter1->get_name() << std::endl;
    std::cout << "Hunter volume: " << hunter1->get_volume() << std::endl;
    return 0;
}