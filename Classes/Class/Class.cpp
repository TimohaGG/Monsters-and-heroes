#include"Class.h"

Human::Human(string name)
{
	this->name = name;
}

string Human::GetName()
{
	return name;
}
void Human::SetName(string name) 
{ 
	this->name = name; 
}

void Human::PrintName()
{
	cout << "Name: "<<name<<endl;
}

void Student::SetGroup(string group)
{
	this->group = group;
}

string Student::GetGroup()
{
	return group;
}

void Student::PrintGroup()
{
	cout << "Group: " << group << endl;
}

void Student::PrintStudent()
{
	PrintName();
	PrintGroup();
}



Professor::Professor()
{
	subject = "none";
}

Professor::~Professor()
{
	delete[] groups;
}

void Professor::SetSubject(string subject)
{
	this->subject = subject;
}

void Professor::PrintSubject()
{
	cout << "Subject: " << subject << endl;
}

void Professor::PrintGroups()
{
	cout << "Groups: " << endl;
	for (size_t i = 0; i < GroupsAmount; i++)
	{
		cout << "\t" << groups[i] << endl;
	}
}

void Professor::PrintProfessor()
{
	PrintName();
	PrintSubject();
	PrintGroups();
}

void Professor::SetGroups(int GroupsAmount)
{
	groups = new string[GroupsAmount];
	this->GroupsAmount = GroupsAmount;
	for (size_t i = 0; i < GroupsAmount; i++)
	{
		getline(cin, groups[i]);
	}
}

string Professor::GetSubject()
{
	return subject;
}

Professor* FillProfessors(Professor*& arr, int size)
{
	string name;
	string subject;

	for (size_t i = 0; i < size; i++)
	{
		cout << "Name: ";
		cin >> name;
		cout  << "Subject: ";
		cin >> subject;
		cout << endl;
		arr[i] = Professor(name, subject);
	}
	return arr;
}
