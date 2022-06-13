#pragma once
#include"../../Lib/Lib.h"
class Weaphon {					//Абстрактный класс 
public:
	virtual void Shoot() = 0;
};

class Gun : public Weaphon
{
public:
	 void Shoot() override;
};

class Machinegun : public Gun {
public:
	void Shoot() override;
};

class Bazooka : public Weaphon {
public:
	void Shoot() override;
};

class Bomb : public Weaphon {
public:
	void Shoot() override;
};

class Player  {
public:
	void Shoot(Weaphon* weaphon);
	void Print();
	Player();
	Player(string name);
	Player(string name, int age);
	

private:
	static int amount;
	string name;
	int age;
	int id;
};