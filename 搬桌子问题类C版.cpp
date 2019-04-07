#include<iostream>
#include<cstring> 
using namespace std;
int main()
{
	int N;
	cin>>N;
	int n,f,s,t,R[402],max;
	while(N--)
	{
	cin>>n;
	memset(R,0,sizeof(R));
		for( int i=1;i<=n;i++)
		{
			cin>>f>>s;
			if(f%2==0)
			f--;
			if(s%2==0)
			s--;
			if(f>s)
			{
			t=f;
			f=s;
			s=t;	
			}
			for(int j=f;j<=s;j++)
					R[j]++;
		}
		max=0;
		for(int i=1;i<=400;i++)	
		{
			if(R[i]>max)
			max=R[i];
		}
		cout<<max*10<<endl;
	}	
	return 0;
} 
