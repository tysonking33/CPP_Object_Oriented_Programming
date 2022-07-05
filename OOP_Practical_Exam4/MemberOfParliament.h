#ifndef MEMBEROFPARLIAMENT_H
#define MEMBEROFPARLIAMENT_H

#include <iostream>
#include <string.h>

using namespace std;

class MemberOfParliament {
protected:
    string name;              // the name of the MemberOfParliament
    string position;          // the position of the MemberOfParliament
    int yearsService;         // the years of service in MemberOfParliament; takes only non-negative values
public:
    MemberOfParliament();
    MemberOfParliament(string n, string p, int l);   // creates the parliament member name n, 
                                        // their position in parliament p, and number of years in service l
    virtual bool isElectionYear(); // true if the representative has to run for election
    void set_name(string n);
    string get_name();
    void set_position(string p);
    string get_position();
    void set_yearsService(int l);
    int get_yearsService();
};

#endif