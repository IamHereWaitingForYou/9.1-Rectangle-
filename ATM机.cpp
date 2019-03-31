#include "pch.h"
#include <iostream>
#include<iomanip>
#include "Account.h"
using namespace std;
int main()
{
	int I,n,s;
	Account act[10];
	for (int i = 0; i < 10; i++)
	{
		act[i].Resetbanlance(100.0);
	}
	while (true)
	{
		s = 0;
		cout << "Enter an id:";
		cin >> I;
		if (I >= 0 && I <= 9)
		{
			while (true)
			{
				cout << "Main menu" << endl;
				cout << "1:Check Banlance" << endl;
				cout << "2:withdraw" << endl;
				cout << "3:deposit" << endl;
				cout << "4:exit" << endl;
				cout << "Enter a choice：" ;

				cin >> n;
				if (n == 1)
					cout << "The banlance is " <<fixed<<setprecision(1)<< act[I].getBanlance() << endl;
				else if (n == 2)
				{
					cout << "Enter an amount to withdraw:";
					cin >> s;
					act[I].withdraw(s);
				}
				 else if (n == 3)
				{
					cout << "Enter an amount to deposit:";
					cin >> s;
					act[I].deposit(s);
				}
				else if (n == 4)
					break;
				else
				{
					cout << "Wrong number!,try again!" << endl;
				}

			}
		}
		else
		{
			cout << "Wrong ID,please try again!" << endl;
		//	continue;
		}
	}
}
