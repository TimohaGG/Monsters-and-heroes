#include"Class.h"
#include"../../Lib/Lib.h"
void Gun::Shoot()
{
	cout << "Bang" << endl;
}

void Machinegun::Shoot()
{
	cout << "Bang Bang Bang" << endl;
}

void Bazooka::Shoot()
{
	cout << "BABAAAAH!!!!" << endl;
}


void Bomb::Shoot()
{
	int timer = 5;
	for (size_t i = timer; i >0; i--)
	{
		cout << i << endl;
		Sleep(1000);
	}
	cout << "BABAH!!!"<<endl;
}

void Player::Shoot(Weaphon* weaphon)
{
	weaphon->Shoot();
}

void Player::Print()
{
	cout <<"#" << id << " Name: " << name << endl << "Age: " << age << endl;
}

Player::Player()
{
	amount++;
	id = amount;
	name = "unknown";
	age = 0;
}

Player::Player(string name): Player()		//Дилегируещие конструкторы
{
	this->name = name;
}

Player::Player(string name, int age): Player(name)	//Дилегируещие конструкторы
{
	this->age = age;
}

int Player::amount = 0;