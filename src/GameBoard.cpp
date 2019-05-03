#include "GameBoard.h"
#include "Player.h"
#include <iostream>

GameBoard::GameBoard(){ }

void GameBoard::Graphics(){
    std::cout << "\nTic-Tac-Toe" << std::endl;
    std::cout << "First to align 3 of their marks wins!\n" << std::endl;
    std::cout << "Player 1 (X) - Player 2 (O)\n" << std::endl;
    std::cout << "     |     |    " << std::endl;
    std::cout << "  " << square[1] << "  |  " << square[2] << "  |  " <<
              square[3] << std::endl;
    std::cout << "_____|_____|_____" << std::endl;
    std::cout << "     |     |     " << std::endl;
    std::cout << "  " << square[4] << "  |  " << square[5] << "  |  " <<
              square[6] << std::endl;
    std::cout << "_____|_____|_____" << std::endl;
    std::cout << "     |     |     " << std::endl;
    std::cout << "  " << square[7] << "  |  " << square[8] << "  |  " <<
              square[9] << std::endl;
    std::cout << "     |     |     " << std::endl;
}
