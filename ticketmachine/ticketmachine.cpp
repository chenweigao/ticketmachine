// ticketmachine.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include "TicketMachine.h"
using namespace std;

int main()
{
	TicketMachine tm;
	tm.insertMoney(100);
	tm.showBalence();
    return 0;
}

//definiation of functions

TicketMachine::TicketMachine() : PRICE(0), balance(0)
//initilize the private variable
{
	cout << "--constructor--" << endl;
}


TicketMachine::~TicketMachine()
{
	cout << "--destroctor--" << endl;
}

void TicketMachine::showPrompt()
{
	cout << "something";
}

void TicketMachine::insertMoney(int money)
{
	balance += money;
}
 
void TicketMachine::showBalence() 
{
	cout << balance;
}

int TicketMachine::refundBalance()
{
	int amountToRefound;
	amountToRefound = balance;
	balance = 0;
	return amountToRefound;

	//private成员变量，在该类的任何函数中都可以使用
	// fileds, parameters = local variable
}


