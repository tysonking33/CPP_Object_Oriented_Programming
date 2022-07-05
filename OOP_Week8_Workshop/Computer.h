#ifndef COMPUTER_H
#define COMPUTER_H

#include <iostream>
#include <string>
#include "Player.h"
using namespace std;

class Computer: public Player{
    Computer();
    int CNumMoves;
    string C_Move;
    string *C_Move_Array;
    Computer(string letter);
    void move();
    string getMoves();
    ~Computer();
};

#endif


//polymorphism
//base class *object = new subclass();