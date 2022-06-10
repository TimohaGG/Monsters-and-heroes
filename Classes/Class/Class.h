#pragma once
#include"../../Lib/Lib.h"
class Pixel {
public:
	Pixel();
	Pixel(int r, int g, int b);
	string PrintPixel() { return "Pixel r: " + to_string(r) + " g: " + to_string(g) + " b: " + to_string(b); }
private:
	int r;
	int g;
	int b;
};



