#include<iostream>
using namespace std;
bool compareBM(string s1, string s2)
{
	if (s1.length() >= s2.length())
		return true;
	else
		return false;
}
int main()
{
	string s1,s2;
	bool c;
	cin>>s1;
	cout<<endl;
	cin>>s2;
	cout<<endl;
	c=compareBM(s1,s2);
	cout<<c;
} 
