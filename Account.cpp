#include "pch.h"
#include "Account.h"
Account::Account()
{
	id = 0;
	annualInterestRate = 0;
	banlance = 0;
}
int Account::getID()
{
	return id;
}
double Account::getBanlance()
{
	return banlance;
}
double Account::getannualInterestRate()
{
	return annualInterestRate;
}
void Account::Resetid(int ID)
{
	id = ID;
}
void Account::Resetbanlance(double BANLANCE)
{
	banlance = BANLANCE;
}
void Account::RestannualInterestRate(double ANNUALINTERESTRATE)
{
	annualInterestRate = ANNUALINTERESTRATE;
}

double Account::getMonthlyInterestRate()
{
	double monthlyIntetestRate = annualInterestRate / 1200;
	return monthlyIntetestRate;
}
void Account::withdraw(double amount)
{
	banlance -= amount;
}
void Account::deposit(double amount)
{
	banlance += amount;
}
Account::~Account()
{
}
