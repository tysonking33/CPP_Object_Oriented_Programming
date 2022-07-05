#include <iostream>
#include <string>
#include "person.h"

using namespace std;

person::person()
{
    name = "Steve";
    cash = 12;
}

person::person(string myName, int Salary) // a name and salary must be provided to create a person
{
    name = myName;
    cash = Salary;
}
void person::setName(string myName)      // change the person's name
{
    name = myName;
}
string person::getName()
{
    return name;
}
void person::setSalary(int mySalary)     // change the person's salary
{
    cash = mySalary;
}
int person::getSalary()
{
    return cash;
}