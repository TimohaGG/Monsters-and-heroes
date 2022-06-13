#include"Class.h"

void Creature::reduceHealth(int amount)
{
	health -= amount;
}

bool Creature::isDead()
{
	if (health <= 0)return true;
	else return false;
}

void Creature::addGold(int add)
{
	gold += add;
}
