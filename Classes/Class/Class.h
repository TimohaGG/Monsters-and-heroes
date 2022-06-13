#pragma once
#include"../../Lib/Lib.h"
class Msg {
public:
	Msg(string msg) {
		this->msg = msg;
	}
	virtual string GetMsg() {
		return msg;
	}
private:
	string msg;
};

class BrMsg : public Msg{
public:
	BrMsg(string msg) : Msg(msg) {

	}
	string GetMsg() override
	{
		return "[" + ::Msg::GetMsg() + "]";
	}
};

class Printer{
public:
	void Print(Msg* msg) {
		cout << msg->GetMsg() << endl;
	}
};