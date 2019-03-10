#include<iostream>
#include"Rectangle2.h"
#include"Rec3.cpp"
using namespace std;
int main()
{
	int w,h; 
	Rec Rid;
	cout<<"默认面积是："<<Rid.getArea()<<endl;
	cout<<"默认周长是："<<Rid.getPerimeter()<<endl; 
	Rid.reset(2,4);
	
	cout<<"重设面积是："<<Rid.getArea()<<endl;
	cout<<"重设周长是："<<Rid.getPerimeter()<<endl;
	cout<<"请输入长和宽："<<endl;
	cin>>w>>h;
	Rec Rid1(w,h);
	cout<<"新矩形面积是："<<Rec(w,h).getArea()<<endl; 
	cout<<"新矩形的周长是："<<Rid1.getPerimeter()<<endl;
	return 0;
} 
