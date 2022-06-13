#include"Class.h"

Creature::Creature()
{
	name = "Unknown";
	sym = '-';
	health = 0;
	damage = 0;
	gold = 0;
}

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


void Creature::ShowStatistics()
{
	cout << "You have " << getHealth() 
		<< " health and are carrying "
		<< getGold() << " gold" << endl;
	cout << "Damage: " << damage << endl;
}

void Player::levelUp()
{
	level++;
	damage++;
}


Monster::MonsterData Monster::monsterData[Monster::MAX_TYPES]
{
	{ "dragon", 'D', 20, 4, 100 },
	{ "orc", 'o', 4, 2, 25 },
	{ "slime", 's', 1, 1, 10 }
};

int getRandomNumber(int min, int max)
{
	static const double fraction = 1.0 / (static_cast<double>(RAND_MAX) + 1.0);
	return static_cast<int>(rand() * fraction * (max - min + 1) + min);
}

Monster Monster::getRandomMonster()
{
	int num = getRandomNumber(0, Monster::MAX_TYPES - 1);
	return Monster(static_cast<Type>(num));
}
