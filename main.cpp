#include"Lib/Lib.h"
#include"Classes/MyClass/MyClass.h"
int main() {
	RUS;
	TIME;
	int size = 2;
	int size2 = 6;
	MyClass a(size);
	MyClass b(size2);
	
	MyClass c= a / b;
	cout << "A: ";
	a.PrintArr();
	cout << "B: ";
	b.PrintArr();
	cout << "C: ";
	c.PrintArr();
}