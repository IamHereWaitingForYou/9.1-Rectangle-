#include<iostream>
#include"key2.h"
#include"key2.cpp"
#include<string>
using namespace std;
int main()
{
	Ckey k;
	//string g;
//	cin>>g;
//	k.reSet(g);
if(k.getResFirst()==true&&k.getResSec()==true&&k.getResThr()==true)
cout<<"valid password"<<endl;
else
cout<<"invalid password"<<endl;	
	
}
