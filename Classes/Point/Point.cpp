#include"Point.h"
#include"../../Lib/Lib.h"
Point::Point()
{
	x = 0;
	y = 0;
}

Point::Point(int x, int y)
{
	this->x = x;
	this->y = y;
}

void Point::Print()
{
	cout << "X: " << x << endl << "Y: " << y << endl << endl;
}

Point& Point::operator=(const Point& other)
{
	this->x = other.x;
	this->y = other.y;
	return*this;
}

Point Point::operator+(const Point& other)
{
	Point tmp;
	tmp.x = this->x + other.x;
	tmp.y = this->y + other.y;
	return tmp;
}

Point Point::operator+=(const Point& other)
{
	this->x += other.x;
	this->y += other.y;
	return *this;
}

Point::Point(const Point& other)
{
	this->x = other.x;
	this->y = other.y;
}

bool Point::operator==(const Point& other)
{
	return this->x == other.x && this->y == other.y;
}

bool Point::operator!=(const Point& other)
{
	return !(this->x == other.x && this->y == other.y);
}
