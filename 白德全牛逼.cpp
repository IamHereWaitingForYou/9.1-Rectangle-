#include<iostream>
#include<fstream> 
#include<string> 
using namespace std;
int main()
{
	ofstream opcFile;
	opcFile.open("C:\\Users\\wyx03\\Desktop\\Baidequan.txt");
	// file stream
	opcFile<<"bai"<<" "<<"quan"<<" "<<"niubi"<<"guangx"
	<<" "<<123<<endl;
	opcFile<<"bai"<<" "<<"dezhi"<<"bunibi"<<"quanquan"
	<<" "<<456<<endl;
	opcFile.close();
	cout<<"Cin Done"<<endl; 
	cout<<"Conducting read operation....."<<endl;
	ifstream ipcFile("C:\\Users\\wyx03\\Desktop\\Baidequan.txt");
	string a,b,c,d;
	int e;
	while(!ipcFile.eof())
	{
	ipcFile>>a>>b>>c>>d>>e;
	cout<<a<<" "<<b<<" "<<c<<d<<" "<<e<<endl;		
	}

//	ipcFile>>a>>b>>c>>d>>e;
//	cout<<a<<" "<<b<<" "<<c<<d<<" "<<e<<endl;
	ipcFile.close();
	cout<<"Operation Finished"<<endl;	
	return 0;
} 
