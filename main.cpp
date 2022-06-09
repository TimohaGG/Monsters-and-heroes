#include"Lib/Lib.h"


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
	cout << "ID:" << id << endl << "Weigth: " << weight << endl << "Color: " << color << endl<<endl;
}



int main() {
	RUS;
	TIME;
	Apple apple1(100,"Red");
	Apple apple2(150, "Green");
	Apple apple3(200, "Yellow");

	apple1.PrintApple();
	apple2.PrintApple();
	apple3.PrintApple();
}