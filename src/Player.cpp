#include "Player.h"
#include "GameBoard.h"
#include <iostream>

Player::Player(){ Graphics(); }

int Player::GetScore() { return this->score; }
int Player::GetPLayerID() { return this->playerID; }

void Player::Refresh(int mistake) {
    system("cls");
    Graphics();
    Winner();

    if (mistake == 0){
        if (playerID == 1) playerID = 2;
        else if (playerID == 2) playerID = 1;
    }
}

void Player::InputMark(char choice){
    if (playerID == 1) mark = 'X';
    else if (playerID == 2) mark = 'O';

    int mistake = 0;

    switch (choice){
        case '1':
            if (square[1] == '1') square[1] = mark;
            else ++mistake;
            break;
        case '2':
            if (square[2] == '2') square[2] = mark;
            else ++mistake;
            break;
        case '3':
            if (square[3] == '3') square[3] = mark;
            else ++mistake;
            break;
        case '4':
            if (square[4] == '4') square[4] = mark;
            else ++mistake;
            break;
        case '5':
            if (square[5] == '5') square[5] = mark;
            else ++mistake;
            break;
        case '6':
            if (square[6] == '6') square[6] = mark;
            else ++mistake;
            break;
        case '7':
            if (square[7] == '7') square[7] = mark;
            else ++mistake;
            break;
        case '8':
            if (square[8] == '8') square[8] = mark;
            else ++mistake;
            break;
        case '9':
            if (square[9] == '9') square[9] = mark;
            else ++mistake;
            break;
        default:
            Refresh(mistake);
    }
    Refresh(mistake);
}

void Player::Winner()
{
    //horizontal
    if (square[1] == square[2] && square[2] == square[3]) ++score;
    else if (square[4] == square[5] && square[5] == square[6]) ++score;
    else if (square[7] == square[8] && square[8] == square[9]) ++score;
        //vertical
    else if (square[1] == square[4] && square[4] == square[7]) ++score;
    else if (square[2] == square[5] && square[5] == square[8]) ++score;
    else if (square[3] == square[6] && square[6] == square[9]) ++score;
        //diagonal
    else if (square[1] == square[5] && square[5] == square[9]) ++score;
    else if (square[3] == square[5] && square[5] == square[7]) ++score;

    if (score >= 1) std::cout << "Player " << playerID << " Won!\n";
    else score = 0;
}

