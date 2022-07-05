#include <iostream>
#include <string>
#include "Player.h"
#include "Computer.h"
using namespace std;


Computer::Computer(){
    CNumMoves = 0;
    C_Move_Array = new string[100];
    C_Move = "r";
}

Computer::Computer(string letter){
    if ((letter == "r") || (letter == "R")){
        C_Move = "r";
        C_Move_Array[CNumMoves] == C_Move;
        CNumMoves++;
    }
    else if ((letter == "p") || (letter == "P")){
        C_Move = "p";
        C_Move_Array[CNumMoves] == C_Move;
        CNumMoves++;
    }
    else if ((letter == "s") || (letter == "S")){
        C_Move = "s";
        C_Move_Array[CNumMoves] == C_Move;
        CNumMoves++;
    }
    else{
        C_Move = "r";
        C_Move_Array[CNumMoves] == C_Move;
        CNumMoves++;
    }
}
void Computer::move(){
    CNumMoves++;
}
string Computer::getMoves(){
    string ComputerString = "";
    for (int i = 0; i < CNumMoves; i++)
    {
        ComputerString = ComputerString + C_Move_Array[i];
        ComputerString = ComputerString + " ";
    }
    return ComputerString;
}

Computer::~Computer(){
}
