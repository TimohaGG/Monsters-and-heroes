#pragma once

class Fruit {
public:
	Fruit(string name, string color) {
		this->color = color;
		this->name = name;
	}
private:
	string name;
	string color;
};

class Apple: public Fruit {
	Apple() : Fruit() {

	}
};

class Pear : public Fruit {

};