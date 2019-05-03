#ifndef TICTACTOE_GAMEBOARD_H
#define TICTACTOE_GAMEBOARD_H

class GameBoard {
public:
    GameBoard();
    void Graphics();
    char square[10] = { '0', '1', '2', '3', '4', '5', '6', '7', '8', '9' };
};

#endif //TICTACTOE_GAMEBOARD_H
