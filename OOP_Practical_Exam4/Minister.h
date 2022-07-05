#ifndef MINISTER_H
#define MINISTER_H

#include "MemberOfParliament.h"
#include <iostream>
#include <string.h>

using namespace std;

class Minister: public MemberOfParliament{
private:
    string name;
    string position;
    int yearsService;
    int memberID;            // unique id for the member
    string state;            // state or territory member represents
    static int voterID;
public:
    Minister();
    Minister(string n);       // Constructor with name parameter n
                         // should call parent class constructor with name==n, position="Minister", and
                         // yearsService==10
    bool isElectionYear(); // true if the representative has to run for election
    void set_memberID();
    int get_memberID();
    void set_state(string minister_state);
    string get_state();
    void set_voterID();
    static int get_voterID();
};

#endif