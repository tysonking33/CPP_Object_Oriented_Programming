#include <iostream>
#include <string>
#include "meerkat.h"

using namespace std;

int main()
{
    {
    meerkat *bob;
    bob = new meerkat();
    bob->setName("KARL");
    bob->setAge(24);
    cout << bob->getName() << endl;
    cout << bob->getAge() << endl;
    }
    {
    meerkat *Opp;
    Opp = new meerkat();
    Opp->setName("Ben");
    Opp->setAge(300);
    cout << Opp->getName() << endl;
    cout << Opp->getAge() << endl;
    }
    {
    meerkat *Zee;
    Zee = new meerkat();
    Zee->setName("John");
    Zee->setAge(2);
    cout << Zee->getName() << endl;
    cout << Zee->getAge() << endl;
    }
    {
    meerkat *Garfield;
    Garfield = new meerkat();
    Garfield->setName("Ben");
    Garfield->setAge(5);
    cout << Garfield->getName() << endl;
    cout << Garfield->getAge() << endl;
    }


    return (0);
}