#include <iostream>
#include <string>
#include "Player.h"
#include "Person.h"
using namespace std;

Person::Person(){
    PnumMoves = 0;
    P_Move = "R";
    Player_Array = new string[100];

}
void Person::move(string PLR_MOVE){
    if ((PLR_MOVE == "r") || (PLR_MOVE == "R")){
            P_Move = "r";
            Player_Array[PnumMoves] == P_Move;
            PnumMoves++;
    }
    else if ((PLR_MOVE == "s") || (PLR_MOVE == "S")){
            P_Move = "s";
            Player_Array[PnumMoves] == P_Move;
            PnumMoves++;
    }
    else if ((PLR_MOVE == "p") || (PLR_MOVE == "P")){
            P_Move = "p";
            Player_Array[PnumMoves] == P_Move;
            PnumMoves++;
    }
    else{
        cout << "Move unavailable." << endl;
    }
}
string Person::getMoves(){
    string PersonString = "";
    for (int i = 0; i < PnumMoves; i++)
    {
        PersonString = PersonString + Player_Array[i];
        PersonString = PersonString + " ";
    }
    return PersonString;
}
Person::~Person(){
}