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
            totalScore += coins[i].getCentValue();
            std::cout << coins[i].getCentValue() << std::endl;
        }
    }
    rounds += 1;
}
void Game::printScore()
{
    std::cout << "You have " << totalScore << " cents." << std::endl
              << std::endl;
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
}
void Game::playGame()
{
    Game();
    totalScore = 0;
    while (totalScore < 100)
    {
        if (totalScore > 100)
        {
            break;
        }
        std::cout << "Round " << getRounds() << ": " << std::endl;
        FlipCoins();
        printScore();
    }
}