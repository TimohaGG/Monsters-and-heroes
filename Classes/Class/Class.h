#pragma once
#include"../../Lib/Lib.h"
class Image
{
public:
	Image(int pixelAmount);
	~Image();
	void PrintImage();

private:
	class Pixel {
	public:
		Pixel();
		string PrintPixel() { return "Pixel r: "+to_string(r)+" g: " + to_string(g) + " b: " + to_string(b); }
	private:
		int r;
		int g;
		int b;
	};


	static int size;
	Pixel* pixels;

};

