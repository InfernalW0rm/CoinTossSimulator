#pragma once
#ifndef coinGame_H
#define coinGame_H
#include "coin.h"

class Game
{
private:
    Coin coins[3];
    int totalScore;
    int rounds;
    void printFlipResults();
    void FlipCoins(); 

public:
    void printScore();
    int getRounds();
    int getScore();
    Game();
    void playGame();
};
#endif