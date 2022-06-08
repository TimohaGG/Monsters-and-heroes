#pragma once
#include"../../Lib/Lib.h"

class Book;
class Human;

class Human {
public:
	void TakeBook(Book& book);
};

class Book
{
public:
	Book(string name, string author, int number);
	

private:
	string name;
	string author;
	int number;

	friend void Human::TakeBook(Book& book);
};



