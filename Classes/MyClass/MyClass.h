#pragma once

class MyClass
{
public:
	
	int* arr;
	MyClass(int size);
	~MyClass();
	void SetSize(int size);
	void PrintArr();
	int GetSize();
	MyClass(const MyClass& other);
	MyClass& operator =(const MyClass& other);
	MyClass operator +( MyClass& other);
	MyClass operator -(MyClass& other);
	MyClass operator *(MyClass& other);
	MyClass operator /(MyClass& other);
	bool operator==(const MyClass& other);
	bool operator!=(const MyClass& other);
private:
	
	int size;
};

