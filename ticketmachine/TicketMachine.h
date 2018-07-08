#pragma once
class TicketMachine
{
public:
	TicketMachine();
	virtual ~TicketMachine();
	void showPrompt();
	void insertMoney(int money);
	void showBalence();
	void printTicket();
	void showTotal();
	int refundBalance();
	//declaration
private:
	const int PRICE;
	int balance;
	int total;
};

