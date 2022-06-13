#include"Lib/Lib.h"
#include"Classes/Class/Class.h"
class Average
{
public:
	Average() {
		
	}
	
	friend ostream& operator<<(ostream& out, const Average& average)
	{
		
		out << static_cast<double>(average.num) / average.amount;
		
		return out;
	}
	Average& operator+=(int number) {
		num += number;
		++amount;
		return*this;
	}
private:
	int32_t  num = 0;
	int8_t  amount=0;
};


int main() {
	RUS;
	TIME;
	Average a;
	a += 5;
	cout << a<<endl;
	a += 9;
	cout << a << endl;
	a += 19;
	cout << a << endl;
	a += -9;
	cout << a << endl;
	a=(a += 7) += 11;
	cout << a << endl;
}