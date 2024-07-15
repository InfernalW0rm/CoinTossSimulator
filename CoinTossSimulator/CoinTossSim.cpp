#include <iostream>
#include <string>
#include <ctime>
#include "Coin.h"
#include "game.h"
#include "game.cpp"
using namespace std;

int main()
{
	srand(time(0));
	Game newGame;
	newGame.playGame();
};