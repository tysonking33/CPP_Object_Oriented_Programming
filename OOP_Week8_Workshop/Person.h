#ifndef PERSON_H
#define PERSON_H

#include <iostream>
#include <string>
#include "Player.h"
using namespace std;

class Person: public Player{
public:
    Person();
    int PnumMoves;
    string P_Move;
    string *Player_Array;

    void move(string PLR_MOVE);

    string getMoves();

    ~Person();
};

#endif