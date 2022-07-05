#include "Minister.h"
#include "MemberOfParliament.h"
#include <iostream>
#include <string.h>

using namespace std;

Minister::Minister(){
}
Minister::Minister(string n): MemberOfParliament(name, position, yearsService){
    // Constructor with name parameter n
    // should call parent class constructor with name==n, position="Minister", and
    // yearsService==10
    this->name = n;
    position = "Minister";
    yearsService = 10;
    state = "area undefined";
    memberID = 0;
    voterID = 0;
}
bool Minister::isElectionYear(){
    // true if the representative has to run for election
    if (yearsService > 4){
        return true;
    }
    else{
        return false;
    }
}
void Minister::set_memberID(){
    memberID = voterID;
}
int Minister::get_memberID(){
    return memberID;
}
void Minister::set_state(string minister_state){
    state = minister_state;
}
string Minister::get_state(){
    return state;
}
void Minister::set_voterID(){
    voterID++;
}
static int Minister::get_voterID(){
    return voterID;
}