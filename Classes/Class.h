#pragma once
#include"../Lib/Lib.h"

class Apple
{
public:
	Apple(int weight, string color);
	void PrintApple();
	int GetId() { return id; }
	static int GetCount() { return count; }
	static void ChangeColor(Apple& apple, string color);
private:
	static int count;
	int weight;
	int id;
	string color;
};