#pragma once

class Point
{
public:
	Point();
	Point(int x, int y);

	void Print();
	Point& operator=(const Point& other);
	Point(const Point& other);
private:
	int x;
	int y;
};


