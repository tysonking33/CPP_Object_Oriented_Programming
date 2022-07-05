#ifndef PLAYER_H
#define PLAYER_H

#include <iostream>
#include <string>
#include "Person.h"
#include "Computer.h"
using namespace std;

class Player {
public:
    Player();
    string Person_Hand;
    string Computer_Hand;
    string outcome;
    virtual void move();        //virtual
    virtual string getMoves();  //virtual
    char getMove();
    bool win(player* opponent);
    ~Player();
};

#endif