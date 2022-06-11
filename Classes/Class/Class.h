#pragma once
class Weaphon {
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
};