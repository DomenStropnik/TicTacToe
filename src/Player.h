#ifndef TICTACTOE_PLAYER_H
#define TICTACTOE_PLAYER_H

#include "GameBoard.h"

class Player : public GameBoard {
public:
    Player();
    int GetScore();
    int GetPLayerID();
    void InputMark(char choice);
    void Winner();
    void Refresh(int mistake);
private:
    char mark; // variable holding either X or O.
    int score = 0; // first to 3.
    int playerID = 1;
};

#endif //TICTACTOE_PLAYER_H