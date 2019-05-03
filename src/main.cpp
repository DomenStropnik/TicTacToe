#include "Player.h"
#include "GameBoard.h"
#include <iostream>

#define INPUT(x) std::cin >> x;

int main(){
    Player Game;
    char choice;

    while (Game.GetScore() == 0) {
        printf("Player%d input a number from 1 to 9: ", Game.GetPLayerID());
        INPUT(choice)
        Game.InputMark(choice);
    }

    return 0;
}