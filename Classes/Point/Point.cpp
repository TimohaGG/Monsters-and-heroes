#include"Point.h"
#include"../../Lib/Lib.h"
Point::Point()
{
	x = 0;
	y = 0;
}

inline Point::Point(int x, int y)
{
	this->x = x;
	this->y = y;
}

void Point::Print()
{
	cout << "X: " << x << endl << "Y: " << y << endl;
}

Point& Point::operator=(const Point& other)
{
	this->x = other.x;
	this->y = other.y;
	return*this;
}

Point::Point(const Point& other)
{
	this->x = other.x;
	this->y = other.y;
}
