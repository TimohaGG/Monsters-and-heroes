#include"Lib/Lib.h"
#include"Classes/Point/Point.h"
int main() {
	RUS;
	TIME;

	//------------Point------------
	Point a(2,4);
	a.Print();
	Point b(5,3);
	b.Print();

	if (a != b) cout << "Yes!!" << endl;
	else cout << "No" << endl;
}