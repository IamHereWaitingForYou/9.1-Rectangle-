#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int a[100],b[100],c[1000];
	int n;
	int count1=0;
	int count2=0;
	cin>>n;
	a[n]=0;
	b[n]=0;
	//while(n--)
	//{
		int k=0;
		for(int i=0;i<n;i++)
			cin>>a[i];
		for(int i=0;i<n;i++)
			cin>>b[i];
		sort(a,a+n);
		sort(b,b+n);
	for(int i=k;i<n;i++)
	{

		for(int j=i;j<=n;j++)//king's speed
		{
			if(a[i]>b[j])//Ìï¼ÉÄÜÓ®
			{ 
			//cout<<k<<endl;
			count1++;
			continue; 
			}
			else if(a[i]<b[j]&&b[j]==0)
			{
			count2++;
			continue;
			}
			//k++;
		}
	}
		cout<<count1<<" "<<count2<<endl;
		if(count1<=count2)
		{
			
			cout<<0<<endl;
		}
		else if (count1>count2)
		cout<<(count1-count2)*200<<endl;
		
		
	//}
	return 0;
}
