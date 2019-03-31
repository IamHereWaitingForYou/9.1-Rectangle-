#pragma once
class Account
{
public:
	Account();
	~Account();
	int getID();
	double getBanlance();
	double getannualInterestRate();
	void Resetid(int ID);
	void Resetbanlance(double BANLANCE);
	void RestannualInterestRate(double ANNUALINTERESTRATE);
	double getMonthlyInterestRate();
	void withdraw(double amount);
	void deposit(double amount);
private:
	int id;
	double banlance;
	double annualInterestRate;
};

