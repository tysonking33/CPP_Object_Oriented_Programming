#ifndef PERSON_H
#define PERSON_H

#include <iostream>
#include <string>

using namespace std;
class person
{
public:
    person();
    person(string myName,int Salary); // a name and salary must be provided to create a person
    string name;
    int cash;
    void setName(string myName);      // change the person's name
    string getName();
    void setSalary(int mySalary);     // change the person's salary
    int getSalary();
};
#endif //PERSON_H