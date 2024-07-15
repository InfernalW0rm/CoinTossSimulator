#pragma once
#ifndef COIN_H
#define COIN_H
#include <iostream>
using namespace std;
class Coin
{
private:
	bool isHeads;
	const int centValue;
public:
	Coin();
	Coin(int value);
	void flip();
	bool isHeads();
	string getSideUp();
};
#endif
