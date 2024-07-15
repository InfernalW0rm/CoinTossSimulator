#include "Coin.h"
#include <iostream>
#include <string>
using namespace std;

Coin::Coin() :
	centValue(1)
{
	flip();
};
Coin::Coin(int value) :
	centValue(value)
{
	flip();
};
void Coin::flip() 
{
	boolVal = rand() % 2;
	if (boolVal = 1)
		isHeadsTrue = true;
	else
		isHeadsTrue = false;
};
bool Coin::isHeads() const
{
	return isHeadsTrue;
};
string Coin::getSideUp() const
{
	if (isHeadsTrue)
		return "Heads";
	else
		return "Tails";
};
