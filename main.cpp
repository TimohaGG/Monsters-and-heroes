#include"Lib/Lib.h"
#include"Classes/Class/Class.h"

int main() {
	RUS;
	TIME;
	int size;
	cout << "¬ведите размер"<<endl;
	cin >> size;
	Pixel* arr = new Pixel[size];
	
	for (size_t i = 0; i < size; i++)
	{
		arr[i] = Pixel(rand()%255, rand() % 255, rand() % 255);
	}
	for (size_t i = 0; i < size; i++)
	{
		cout<<arr[i].PrintPixel()<<endl;
	}
	delete[] arr;
}