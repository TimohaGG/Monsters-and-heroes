#include"Lib/Lib.h"
#include"Classes/Class.h"


int main() {
	RUS;
	TIME;
	Apple apple1(100,"Red");
	apple1.PrintApple();
	Apple::ChangeColor(apple1, "Yellow");
	apple1.PrintApple();
	//Apple apple2(150, "Green");
	//Apple apple3(200, "Yellow");

	//apple1.PrintApple();
	//apple2.PrintApple();
	//apple3.PrintApple();

	//cout<<Apple::GetCount();
}