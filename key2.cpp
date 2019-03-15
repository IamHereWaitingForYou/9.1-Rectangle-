#include<iostream>
#include"key2.h"
#include<string>
#include<cctype>
Ckey::Ckey()
{
	a="123456abxcv";
	//a=b;
}
bool Ckey::getResFirst()
{
	int c=0;
	for(int i=0;i!='\0';i++)
	{
		a[i]=a[i];
		c++;
	} 
	if(c<8)
	return false;
	else return true;
}	
bool Ckey::getResSec()
{
	bool b=false,c=true;
	if(getResFirst()==true)
	{
	
	for(int i=0;i!='\0';i++)
	{
		if(isdigit(a[i])==true)
		{
			b==true;
		}
		else if(isalpha(a[i])==true)
		{
			c==true;
		}
	}
		
	} 
		if(b==true&&c==true)
		return true;
}
bool Ckey::getResThr()
{
	int c=0;
	if(getResSec()==true)
	{
	for(int i=0;i!='\0';i++)
	{
		if(isdigit(a[i])==true);
		c++;
	} 
	}
	if(c>=2)
	return true;
	else return false;
}
void Ckey::reSet(std::string c)
{
	a=c;
}
//bool check()
//{
//	if(Ckey::getResFirst()==true&& Ckey::getResSec()==true&&Ckey::getResThr()==true)
///
//return true;
//else 
////
//return false;
//}
