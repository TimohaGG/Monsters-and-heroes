#include"MyClass.h"
#include"../../Lib/Lib.h"

MyClass::MyClass(int size)
{
	
	this->size = size;
	this->arr = new int[size];
	for (size_t i = 0; i < size; i++)
	{
		arr[i] = rand() % 10;
	}
}

MyClass::~MyClass()
{
	
	delete[] arr;
}

void MyClass::SetSize(int size)
{
	this->size = size;
}

void MyClass::PrintArr()
{
	for (size_t i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}

int MyClass::GetSize()
{
	return size;
}

MyClass::MyClass(const MyClass& other)
{
	
	this->size = other.size;
	this->arr = new int[other.size];
	for (size_t i = 0; i < other.size; i++)
	{
		this->arr[i] = other.arr[i];
	}
}

MyClass& MyClass::operator=(const MyClass& other)
{
	this->size = other.size;
	if (this->arr != nullptr) {
		delete[] this->arr;
	}
	this->arr = new int[other.size];
	for (size_t i = 0; i < other.size; i++)
	{
		this->arr[i] = other.arr[i];
	}
	return*this;
}

MyClass FillArr(MyClass* arr1, MyClass& arr2, char oper) {
	MyClass tmp(arr2.GetSize());
	for (size_t i = 0; i < arr2.GetSize(); i++)
	{
		if (i < arr1->GetSize()) {
			switch (oper)
			{
			case '+': {
				tmp.arr[i] = arr1->arr[i] + arr2.arr[i];
			}break;
			case '-':{
				tmp.arr[i] = arr1->arr[i] - arr2.arr[i];
				}break;
			case '*': {
				tmp.arr[i] = arr1->arr[i] * arr2.arr[i];
			}break;
			case '/': {
				if (arr2.arr[i] != 0)
					tmp.arr[i] = arr1->arr[i] / arr2.arr[i];
				else
					tmp.arr[i] = 0;
			}break;
			}
			
		}
			
		else {
			tmp.arr[i] = arr2.arr[i];
		}
			
	}
	return tmp;
}

MyClass MyClass::operator+( MyClass& other)
{
	if (this->size > other.size) {
		MyClass tmp(FillArr(&other, *this,'+'));
		return tmp;
	}
	else {
		MyClass tmp(FillArr(this, other,'+'));
		return tmp;
	}
	
}
MyClass MyClass::operator-(MyClass& other)
{
	if (this->size > other.size) {
		MyClass tmp(FillArr(&other, *this,'-'));
		return tmp;
	}
	else {
		MyClass tmp(FillArr(this, other,'-'));
		return tmp;
	}

}

MyClass MyClass::operator*(MyClass& other)
{
	if (this->size > other.size) {
		MyClass tmp(FillArr(&other, *this, '*'));
		return tmp;
	}
	else {
		MyClass tmp(FillArr(this, other, '*'));
		return tmp;
	}

}

MyClass MyClass::operator/(MyClass& other)
{
	if (this->size > other.size) {
		MyClass tmp(FillArr(&other, *this, '/'));
		return tmp;
	}
	else {
		MyClass tmp(FillArr(this, other, '/'));
		return tmp;
	}

}

bool MyClass::operator==(const MyClass& other)
{
	if (this->size == other.size) {
		for (size_t i = 0; i < size; i++)
		{
			if (this->arr[i] != other.arr[i])return false;
		}
	}
	else {
		return false;
	}
	return true;
}

bool MyClass::operator!=(const MyClass& other)
{
	if (this->size != other.size) {
		for (size_t i = 0; i < size; i++)
		{
			if (this->arr[i] == other.arr[i])return false;
		}
	}
	else {
		return false;
	}
	return true;
}