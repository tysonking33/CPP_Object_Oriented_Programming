#include <iostream>
#include <string>
#include "meerkat.h"
#include "cart.h"


using namespace std;

int main()
{
    /*meerkats;
    meerkat *bob;
    bob = new meerkat();
    bob->setName("KARL");
    bob->setAge(24);
    cout << bob->getName() << endl;
    cout << bob->getAge() << endl;

    meerkat *Opp;
    Opp = new meerkat();
    Opp->setName("Ben");
    Opp->setAge(300);
    cout << Opp->getName() << endl;
    cout << Opp->getAge() << endl;

    meerkat *Zee;
    Zee = new meerkat();
    Zee->setName("John");
    Zee->setAge(2);
    cout << Zee->getName() << endl;
    cout << Zee->getAge() << endl;

    meerkat *Garfield;
    Garfield = new meerkat();
    Garfield->setName("Ben");
    Garfield->setAge(5);
    cout << Garfield->getName() << endl;
    cout << Garfield->getAge() << endl;
    cart1->addMeerkat(*Garfield);

    
    meerkat bob1;
    cout << bob1.getName() << endl;*/

    meerkat bob1("Boor", 5);
    meerkat bob2("name", 12);
    meerkat bob3("Xan", 4);
    meerkat bob4("Sam", 5);
    meerkat bob5("Lam", 40);
    //cart
    cart *cart1;
    cart1 = new cart();
    cart1->addMeerkat(bob1);
    cart1->addMeerkat(bob2);
    cart1->addMeerkat(bob3);
    cart1->addMeerkat(bob4);
    cart1->addMeerkat(bob5);
    
    cart1->printMeerkats();

    cart1->emptyCart();

    /*cart1->addMeerkat(Zee);
    cart1->addMeerkat(Garfield);*/

    return (0);
}