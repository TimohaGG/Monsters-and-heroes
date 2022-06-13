#include"Lib/Lib.h"
#include"Classes/Class/Class.h"

int main() {
	RUS;
	TIME;
	Msg msg("Hello");
	BrMsg brMsg("Hello");

	Printer pr;
	pr.Print(&brMsg);
}