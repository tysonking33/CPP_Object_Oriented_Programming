#include <iostream>
#include <string>
#include "person.h"
#include "aircraft.h"

using namespace std;

int main()
{
    person bob1("Boor", 5);
    person bob2("name", 12);
    person bob3("Xan", 4);
    person bob4("Sam", 5);

    //aircraft
    aircraft *aircraft1;
    aircraft1 = new aircraft("lol", bob1, bob2);
    aircraft1 -> setPilot(bob3);
    aircraft1 -> setCoPilot(bob4);
    
    aircraft1 -> printDetails();
    
    return 0;
}