#include"Class.h"

Image::Image(int pixelAmount)
{
	pixels = new Pixel[pixelAmount];
	size = pixelAmount;
}

Image::~Image()
{
	delete[] pixels;
}

void Image::PrintImage()
{
	for (size_t i = 0; i < size; i++)
	{
		cout << pixels[i].PrintPixel() << endl;
	}
}

Image::Pixel::Pixel()
{
	r = rand() % 255;
	g = rand() % 255;
	b = rand() % 255;
}

int Image::size = 0;