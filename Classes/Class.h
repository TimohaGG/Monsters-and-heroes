#pragma once
#include"../Lib/Lib.h"

class Apple
{
public:
	Apple(int weight, string color);
	void PrintApple();
	int GetId() { return id; }
	static int count;
private:
	int weight;
	int id;
	string color;
};