#include "zoo.h"
#include "hunter.h"
#include "vegie.h"
#include "animal.h"
#include <iostream>
#include <string>

using namespace std;

int main(){
    zoo *zoo1 = new zoo("adelaide zoo", 4, 5);
    cout << "Name: " << zoo1->get_name() << endl;
    cout << "lions are: " << zoo1->get_lions() << endl;
    cout < "Cows are: " << zoo1->get_cows() << endl;

    return 0;
}