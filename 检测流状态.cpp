#include<iostream>
#include<fstream>
#include<string>
using namespace std;
void ShowState(const fstream&);
int main()
{
	fstream inout;
	//Create an output file
	inout.open("team.txt",ios::out);
	inout<<"Dallas";
	cout<<"Normal operation (no erroes)"<<endl;
	ShowState(inout);
	inout.close();
	//Create an input file
	inout.open("team.txt",ios::in);
	//Read string
	string city;
	inout>>city;
	cout<<"End of file (no errors)"<<endl;
	ShowState(inout);
	inout.close();
	//Attempt to read after file closed
	inout >>city;
	cout<<" Bad operation (errors) "<<endl;
	ShowState(inout);
	return 0;
}
void ShowState(const fstream& stream)
{

	cout<<" Stream status: \n";
	cout<<" eof(): "<<stream.eof()<<endl;
	cout<<" fail(): "<<stream.fail()<<endl;
	cout<<" bad(): "<<stream.bad()<<endl;
	cout<<"good(): "<<stream.good()<<endl;
}
