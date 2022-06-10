#include"Class.h"
int Apple::count = 0;

Apple::Apple(int weight, string color)
{
	this->color = color;
	this->weight = weight;
	count++;
	id = count;
}

void Apple::PrintApple()
{
	cout << "ID:" << id << endl << "Weigth: " << weight << endl << "Color: " << color << endl << endl;
}

void Apple::ChangeColor(Apple& apple, string color)
{
	apple.color = color;
}
