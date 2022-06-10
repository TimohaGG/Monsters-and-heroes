#pragma once
class Human
{
public:
	string GetName() { return name; }
private:
	string name;
};

class Student : private Human
{
public:
	string group;
	
};


class Professor : public Human
{
public:
	string subject;
};

