#include<iostream>
#include<set>
using namespace std;
int main()
{
	int n;
	cin>>n;
	double a;
	set<double>s;
	for(set<double>::size_type i=0;i<n;++i)
	{
		a=0;
		cin>>a;
		s.insert(a);
	}
	for(set<double>::iterator it=s.begin();it!=s.end();++it)
	{
		cout<<(*it)<<endl;
	}
	return 0;
}
