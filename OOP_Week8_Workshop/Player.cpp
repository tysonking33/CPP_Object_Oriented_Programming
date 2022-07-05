#include "Player.h"
#include "Person.h"
#include "Computer.h"
#include <iostream>
#include <string>
using namespace std;

Player::Player(){
    Person_Hand = "R";
    Computer_Hand = "R";
    outcome = "draw! go again";
}
void Player::move(){
}

string Player::getMoves(){
}

char Player::getMove(){
    //return the most recent move made
}

bool Player::win(player* opponent){
    //compares the player's moves to see who wins
    if (((Player_Array[PnumMoves] == "r") && (C_Move_Array[CNumMoves] == "r"))
        || ((Player_Array[PnumMoves] == "p") && (C_Move_Array[CNumMoves] == "p"))
        || ((Player_Array[PnumMoves] == "s") && (C_Move_Array[CNumMoves] == "s"))){
            cout << "draw! go again" << endl;
            return false;
    }
    else if (((Player_Array[PnumMoves] == "r") && (C_Move_Array[CNumMoves] == "p"))
        ||((Player_Array[PnumMoves] == "p") && (C_Move_Array[CNumMoves] == "s"))
        ||((Player_Array[PnumMoves] == "s") && (C_Move_Array[CNumMoves] == "r"))){
        cout << "Player loses!" << endl;
        return false;
    }
    else{
        cout << "Player wins" << endl;
        return true;
    }
}

Player::~Player(){
}