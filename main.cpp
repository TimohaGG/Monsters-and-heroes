#include"Lib/Lib.h"
#include"Classes/Class/Class.h"


int main() {
	RUS;
	TIME;
	
	 int size = 3;
	Professor* arr= new Professor[size];
	FillProfessors(arr,size);
	for (size_t i = 0; i < size; i++)
	{
		arr[i].PrintProfessor();
	}
	delete[] arr;
}