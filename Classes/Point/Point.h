#pragma once

class Point
{
public:
	Point();
	Point(int x, int y);

	void Print();
	void SetX(int x) { this->x = x; }
	void SetY(int y) { this->y = y; }
	int GetX() { return x; }
	int GetY() { return y; }
	Point& operator=(const Point& other);
	Point operator+(const Point& other);
	Point operator+=(const Point& other);
	Point(const Point& other);
	bool operator==(const Point& other);
	bool operator!=(const Point& other);
private:
	int x;
	int y;
};


