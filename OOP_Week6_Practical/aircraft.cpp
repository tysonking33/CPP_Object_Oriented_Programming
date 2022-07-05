#include <iostream>
#include <string>
#include "person.h"
#include "aircraft.h"

using namespace std;

// a pilot and copilot must be provided when creating an aircraft
aircraft::aircraft(string callsign, person thePilot, person theCoPilot)
{
    message = callsign;
    Pilot = thePilot;
    CoPilot = theCoPilot;
}
void aircraft::setPilot(person thePilot)      // change the pilot
{
    Pilot = thePilot;
}
person aircraft::getPilot()
{
    return Pilot;
}
void aircraft::setCoPilot(person theCoPilot)  // change the co-pilot
{
    CoPilot = theCoPilot;
}
person aircraft::getCoPilot()
{
    return CoPilot;
}
void aircraft::printDetails()                 // print the callsign, a new line, the pilot name,
                                     // a new line, the co-pilot name and a final newline.
{
    cout << message << endl;
    cout << Pilot.getName() << endl;
    cout << CoPilot.getName() << endl;
}