#pragma once
#include"../../Lib/Lib.h"
class Human
{
public:
	Human() {
		name = "none";
	}
	Human(string name);
	string GetName();
	void SetName(string name);
	void PrintName();
private:
	string name;
};

class Student : public Human
{
public:
	void SetGroup(string group);
	string GetGroup();
	void PrintGroup();
	void PrintStudent();
private:
	string group;
};


class Professor : public Human
{
public:
	Professor();
	Professor(string name, string subject) : Human(name) {
		SetSubject(subject);
	}
	void SetSubject(string subject);
	void PrintSubject();
	void PrintProfessor();
	string GetSubject();

private:
	string subject;
};

Professor* FillProfessors(Professor*& arr, int size);