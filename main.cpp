#include"Lib/Lib.h"
#include"Classes/Class/Class.h"

int main() {
	RUS;
	TIME;
	/*Gun gun;
	Machinegun machinegun;
	Bazooka bazooka;
	Bomb bomb;
	Player player;
	player.Shoot(&gun);
	player.Shoot(&machinegun);
	player.Shoot(&bazooka);
	player.Shoot(&bomb);*/
	Player a;
	Player b("Vitalit");
	Player c("Vasya", 20);
	a.Print();
	b.Print();
	c.Print();
}