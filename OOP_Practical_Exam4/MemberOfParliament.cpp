#include "MemberOfParliament.h"
#include <iostream>
#include <string.h>

using namespace std;

MemberOfParliament::MemberOfParliament(){
}
MemberOfParliament::MemberOfParliament(string n, string p, int l){
    // creates the parliament member name n, 
    // their position in parliament p, and number of years in service l
    name = n;
    position = p;
    yearsService = l;
}
bool MemberOfParliament::isElectionYear(){
    // true if the representative has to run for election
    if (yearsService % 4 == 0){
        return true;
    }
    else if (yearsService % 4 != 0){
        return false;
    }
    return false;
}
void MemberOfParliament::set_name(string n){
    name = n;
}
string MemberOfParliament::get_name(){
    return name;
}
void MemberOfParliament::set_position(string p){
    position = p;
}
string MemberOfParliament::get_position(){
    return position;
}
void MemberOfParliament::set_yearsService(int l){
    yearsService = l;
}
int MemberOfParliament::get_yearsService(){
    return yearsService;
}