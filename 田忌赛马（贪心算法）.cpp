#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int a[100],b[100];
	int n,q=100;
	int k=0;
	int count1=0;
	int count2=0;
	int count3=0;
	int count4=0; 
	while(true)
	{
	cin>>n;
	if(n==0)
	return 0;
	k=0;
	count1=0;
	count2=0;
	count3=0;
 	count4=0; 
		for(int i=0;i<n;i++)
			cin>>a[i];
		for(int j=0;j<n;j++)
			cin>>b[j];
		sort(a,a+n);
		sort(b,b+n);
		
	for(int i=0	;i<n;i++)
	{

		for(int j=k;j<n;j++)
		{
			if(a[i]>b[j])
			{ 
				count1++;
				k=j+1;
				continue; 
			}
			else if(a[i]<b[j])
			{
				if(q!=i)
				{
					count2=0;
					q=i;
				}
				count2++;	
				if(count2==n-count1)
				{
					cout<<count1<<" "<<count2<<" "<<n-count1<<endl;
					count3++;
					count2=0;

				 }	
			}
		}
	
	}
		cout<<count1<<" "<<count2<<" "<<count3<<endl; 
		cout<<(count1-count3)*200<<endl;
	}
	return 0;
}
