#include<iostream>
#include<algorithm> 
using namespace std;
int main()
{
	int j,i=0,n;
	n=++i;
	j=i++;
	cout<<n<<endl<<j;
}
//	int count =5;
//	int *pCount=&count;
//	int n;
//	cin>>n;
//	int *p=new int [n];
//	for(int i=0;i<n;i++)
//	cin>>*(p+i);
//	for(int i=0;i<n;i++)
//	{
//		cout<<*(p+i)<<endl;
//	}
//	cout<<"count:"<<count<<endl;
//	cout<<"&count:"<<&count<<endl;
//	cout<<"pCount"<<pCount<<endl;
//	cout<<"*pCount"<<*pCount<<endl; 
//	//int list[]={1,2,3,4,5};
//	int n;
//	cin>>n;
//	int*list=new int [n];
//	int *p=reverse(list,5);
//		for(int i=0;i<n;i++)
//		cin>>*(p+i);
//	for(int i=0;i<5;i++)
//	{
//		cout<<*(list+i)<<" ";
//	}
//	random_shuffle(list,list+5);
//	for(int i=0;i<5;i++)
//	{
//		cout<<*(list+i)<<endl;
//	}
//	int * Min=min_element(list,list+5);
//	int *Max=max_element(list,list+5);
//	cout<<"Max:"<<*Max<<endl;
//	cout<<"Min:"<<*min_element(list,list+5)<<endl;
//	delete list;
//int *reverse(int *list,int size)
//{
//	for(int i=0,j=size-1;i<j;i++,j--)
//	{
//		int temp=*(list+j);
//		*(list+j)=*(list+i);
//		*(list+i)=temp;
//	}
//	return list;
//}	
//template<typename T>
//T maxValue(T value1,T value2)
//{
//	if(value1>value2)
//	return value1;
//	else 
//	return value2;
// } 
//int main()
//{
//	cout<<maxValue(1,3)<<endl;
//	cout<<maxValue(string("string"),string("csteewaicna"))<<endl;
//	cout<<maxValue(1.3,2.4)<<endl;
//	return 0;
//}
