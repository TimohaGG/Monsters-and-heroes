#pragma once
#include"../../Lib/Lib.h"

class Creature {
public:
	Creature(string name, char sym, int health, int damage, int gold)
		:name(name), sym(sym), health(health), damage(damage), gold(gold){};
	Creature();
	string getName() { return name; }
	char getSym() { return sym; }
	int getHealth() { return health; }
	int getDamage() { return damage; }
	int getGold() { return gold; }
	void reduceHealth(int amount);
	bool isDead();
	void addGold(int add);
	void ShowStatistics();
protected:
	string name;
	char sym;
	int health;
	int damage;
	int gold;
};

class Player : public Creature {
public:
	Player(string name): Creature(name,'@', 10, 1, 0) {
	}
	
	
	void levelUp();
	int GetLevel() { return level; }
	bool hasWon() { 
		return level==20;
	}
private:
	int level=1;
	

};

class Monster : public Creature {
public:
	
	enum Type {
		Dragon,
		Orc,
		Slime,	
		MAX_TYPES
	};
	struct MonsterData {
		string name;
		char symbol;
		int health;
		int damage;
		int gold;
	};
	static MonsterData monsterData[MAX_TYPES];
	Monster(Type type)
	{
		name = monsterData[type].name;
		sym= monsterData[type].symbol;
		health= monsterData[type].health;
		damage= monsterData[type].damage;
		gold= monsterData[type].gold;
	}
	static Monster getRandomMonster();
};