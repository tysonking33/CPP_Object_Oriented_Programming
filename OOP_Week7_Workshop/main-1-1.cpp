#include "Musician.h"
#include <string>
#include <iostream>

using namespace std;

int main(){
    Musician *Stinky;
    Stinky = new Musician("Flute", 13);
    cout << Stinky->get_instrument() << endl;
    cout << Stinky->get_experience() << endl;
    Stinky->~Musician();

    return 0;
}