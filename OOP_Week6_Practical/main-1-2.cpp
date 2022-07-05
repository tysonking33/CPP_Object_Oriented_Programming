#include <iostream>
#include <string>
#include "person.h"

using namespace std;

int main()
{
    {
    person *Ace;
    Ace = new person("Wubzy", 1300);
    Ace->setName("John");
    Ace->setSalary(12345);
    cout << Ace->getName() << endl;
    cout << Ace-> getSalary() << endl;
    }
    {
    person *Giga;
    Giga = new person("Ched", 1300);
    Giga->setName("Chad");
    Giga->setSalary(65742);
    cout << Giga->getName() << endl;
    cout << Giga-> getSalary() << endl;
    }
    {
    person *Bro;
    Bro = new person("Homie", 1300);
    Bro->setName("Mate");
    Bro->setSalary(2);
    cout << Bro->getName() << endl;
    cout << Bro-> getSalary() << endl;
    }
    {
    person *Beta;
    Beta = new person("Male", 1300);
    Beta->setName("Sigma");
    Beta->setSalary(1000000);
    cout << Beta->getName() << endl;
    cout << Beta-> getSalary() << endl;
    }
    return 0;
}