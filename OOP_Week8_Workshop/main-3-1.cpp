#include "Player.h"
#include "Person.h"
#include "Computer.h"
#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

int main(){
    Player *Gigachad;
    Gigachad = new Person("r");
    
    int computer_hand = 1+ (rand() % 3);
    string C_Hand = "r";
    switch (computer_hand){
        case 1:
            C_Hand = "r";
            break;
        case 2:
            C_Hand = "p";
            break;
        case 3:
            C_Hand = "s";
            break;
        default:
            C_Hand = "r";
            break;
    }
    Player *computer;
    computer = new Computer(C_Hand);

    bool player_win = Gigachad->win(computer);
    if (player_win == true){
        return 0;
    }
    while (player_win == false){
        string P_Hand = "r";
        cout << "Rock, paper, scissors";
        cin >> P_Hand;
        Person->move(P_Hand);

        computer_hand = 1+ (rand() % 3);
        string C_Hand = "r";
        switch (computer_hand){
        computer->Computer(C_Hand);

        player_win = Gigachad->win(computer);
    }

    return 0;
}