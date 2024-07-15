#pragma once
#include <iostream>
#include "Game.h"
#include "Coin.cpp"
#include "Coin.h"

void Game::printFlipResults()
{
    std::cout << totalScore;
}
void Game::FlipCoins()
{
    for (int i = 0; i < 3; i++)
    {
        coins[i].flip();
        if (coins[i].isHeads())
        {
            totalScore += centValue;

        }
    }
    rounds += 1;
}
void Game::printScore()
{
    std::cout<<totalScore;
}
int Game::getRounds()
{
    return rounds;
}
int Game::getScore()
{
    return totalScore;
}
Game::Game()
{
    Coin coins[3] = {Coin(25), Coin(10), Coin(5)};
}
void Game::playGame()
{

}