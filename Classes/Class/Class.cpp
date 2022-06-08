#include"Class.h"
#include"../../Lib/Lib.h"

void Human::TakeBook(Book& book)
{
	cout << "----------" << book.name << "----------\n";
	cout << "By " << book.author << endl;
	cout << "Code: " << book.number <<endl;
	
}

Book::Book(string name, string author, int number)
{
	this->name = name;
	this->author = author;
	this->number = number;
}
