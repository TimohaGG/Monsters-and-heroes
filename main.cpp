#include"Lib/Lib.h"
#include"Classes/Class/Class.h"


int main() {
	RUS;
	TIME;
	
	 int size = 3;
	 Professor pro;
	 pro.SetName("Alex");
	 pro.SetSubject("Math");
	 pro.SetGroups(2);
	 pro.PrintProfessor();
}

//
//bool noRepeat(int*& arr, int number, int gamesAvailable) {
//	for (size_t i = 0; i < gamesAvailable; i++)
//	{
//		if (arr[i] == number)
//			return false;
//	}
//	return true;
//}
//
//
//void User::randNumber(int*& arrNumbers, int gamesAvailable, int userGamesAmount) {
//	//int buf = gamesAvailable;
//	arrNumbers[0] = rand() % gamesAvailable;
//	for (size_t i = 1; i < userGamesAmount; i++)
//	{
//		int number;
//		do {
//			number = rand() % gamesAvailable;
//			//cout << number << endl;
//		} while (!noRepeat(arrNumbers, number, gamesAvailable));
//		arrNumbers[i] = number;
//
//	}
//}