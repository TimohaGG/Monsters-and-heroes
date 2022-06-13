#include"Lib/Lib.h"
#include"Classes/Class/Class.h"
int getRandomNumber(int min, int max);

void attackPlayer(Player& player, Monster monster) {
	if (monster.isDead()) {
		return;
	}
	player.reduceHealth(monster.getDamage());
	cout << "The " << monster.getName() << " gave you " << monster.getDamage() << " damage" << endl;
}

void attackMonster(Player player, Monster& monster) {
	if (player.isDead()) {
		return;
	}
	cout << "You hit the " << monster.getName() << " with " << player.getDamage() << " damage" << endl;
	Sleep(1000);
	monster.reduceHealth(player.getDamage());
	if (monster.isDead()) {
		cout << "You killed the monster" << endl;
		player.levelUp();
		Sleep(1000);
		system("cls");
		
		player.addGold(monster.getGold());
		cout << "You level: " << player.GetLevel() << "\tGold: " << player.getGold() << endl;
		
	}
}

void fightMonster(Player& player) {

	Monster monster=Monster::getRandomMonster();
	cout << "You have met monster " << monster.getName()<<"(Damage: "<<monster.getDamage()<<")"<<endl;
	cout << "Your xp: " << player.getHealth() << "\tMonster xp: " << monster.getHealth() << endl << endl;
	Sleep(1000);
	while (!player.isDead() && !monster.isDead()) {
		char choise;
		cout << "(R)un or (F)ight: ";
		cin >> choise;
		system("cls");
		if (choise == 'R'||choise=='r') {
			if (getRandomNumber(0, 1)) {
				cout << "You are safe" << endl;
				Sleep(1000);
				return;
			}
			else {
				cout << "Your escape failed" << endl;
				Sleep(1000);
				attackPlayer(player, monster);
			}
		}
		else if(choise=='F'||choise=='f') {
			cout << "Your xp: " << player.getHealth() << "\tMonster xp: " << monster.getHealth() << endl<<endl;
			attackMonster(player, monster);
			attackPlayer(player, monster);
			
		}
	}
	
}

int main() {
	RUS;
	TIME;
	
	srand(static_cast<unsigned int>(time(0))); // устанавливаем значение системных часов в качестве стартового числа
	rand(); // сбрасываем первый результат

	cout << "Enter your name: ";
	string name;
	getline(cin, name);
	Player player(name);

	while (!player.isDead() && !player.hasWon()) {
		fightMonster(player);
	}

	if (player.hasWon()) {
		cout << "YOU WIN!!!" << endl;
		cout << "Your gold: " <<player.getGold() << endl;
	}
	else {
		cout << "YOU DIED!" << endl;
		cout << "Your level was " << player.GetLevel() << endl;
		cout << "Your gold: " << player.getGold()<<endl;
	}

}