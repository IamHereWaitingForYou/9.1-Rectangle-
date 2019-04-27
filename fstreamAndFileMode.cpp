#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	fstream inout;
	//Creat a file
	inout.open("City1.txt",ios::out);
	//Write cities
	inout<<"Dallas"<<" "<<"Houston"<<" "<<"Atlanta"<<" ";
	inout.close();
	//Append to the file
	inout.open("City1.txt",ios::out|ios::app);
	//Write Cities
	inout<<"Savannah"<<" "<<"Austin"<<" "<<"Chicago";
	inout.close();
	string city;
	//open the file
	inout.open("City1.txt",ios::in);
	while(!inout.eof())
	{
		inout>>city;
		cout<<city<<" ";
	}
	inout.close();
	return 0;	
} 
