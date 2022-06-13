#pragma once
#include"../../Lib/Lib.h"

class Creature {
public:
	Creature(string name, char sym, int health, int damage, int gold) :name(name), sym(sym), health(health), damage(damage), gold(gold){};
	string getName() { return name; }
	char getSym() { return sym; }
	int getHealth() { return health; }
	int getDamage() { return damage; }
	int getGold() { return gold; }
	void reduceHealth(int amount);
	bool isDead();
	void addGold(int add);
private:
	string name;
	char sym;
	int health;
	int damage;
	int gold;
};