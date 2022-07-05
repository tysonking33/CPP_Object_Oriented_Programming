#include "Minister.h"
#include "MemberOfParliament.h"
#include <iostream>
#include <string.h>

using namespace std;

int main(){
    Minister *minister1 = new Minister("ATL");
    cout << "Election year: " << minister1->isElectionYear() << endl;
    cout << "MemberID: " << minister1->get_memberID()<< endl;
    cout << "Name: " << minister1->get_name() << endl;
    cout << "Position: " << minister1->get_position() << endl;
    cout << "State: " << minister1->get_state() << endl;
    cout << "VoterID: " << minister1->get_voterID() << endl;
    cout << "Years serviced: " << minister1->get_yearsService() << endl;
    return 0;
}