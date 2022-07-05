#include "Orchestra.h"
#include "Musician.h"
#include <string>
#include <iostream>

using namespace std;

int main(){
    Musician *Stinky;
    Stinky = new Musician("Flute", 13);

    Orchestra *Orchestra1;
    Orchestra1 = new Orchestra(1);
    cout << "current number of moombers: " << Orchestra1->get_current_number_of_members() << endl;

    cout << "do they have the instrument? " << Orchestra1->has_instrument("Flute") <<  endl;

    //Orchestra1->get_members();
    cout << Orchestra1->add_musician(*Stinky) << endl;


    cout << "current number of members: " << Orchestra1->get_current_number_of_members() << endl;

    cout << "do they have the instrument? " << Orchestra1->has_instrument("Flute") <<  endl;

    Orchestra1->get_members();

    return 0;
}