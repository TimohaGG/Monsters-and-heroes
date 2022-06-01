#include"Lib/Lib.h"
#include"Classes/MyClass/MyClass.h"
int main() {
	RUS;
	TIME;
	int size = 3;
	int size2 = 3;
	MyClass a(size);
	cout << "A: ";
	a.PrintArr();
	MyClass b(size2);
	cout << "B: ";
	b.PrintArr();
	MyClass c= a + b;
	cout << "A: ";
	a.PrintArr();
	cout << "B: ";
	b.PrintArr();
	cout << "C: ";
	c.PrintArr();
}