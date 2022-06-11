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
