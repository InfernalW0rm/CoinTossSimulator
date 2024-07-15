#pragma once
#ifndef COIN_H
#define COIN_H
#include <iostream>
using namespace std;
class Coin
{
private:
	int boolVal;
	bool isHeadsTrue;
	const int centValue;
public:
	Coin();
	Coin(int value);
	void flip();
	bool isHeads() const;
	string getSideUp() const;
	int getCentValue() const;
};
#endif
