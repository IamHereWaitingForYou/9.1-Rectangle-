#include<iostream>
#include"Rectangle2.h"
#include"Rec3.cpp"
using namespace std;
int main()
{
	int w,h; 
	Rec Rid;
	cout<<"Ĭ������ǣ�"<<Rid.getArea()<<endl;
	cout<<"Ĭ���ܳ��ǣ�"<<Rid.getPerimeter()<<endl; 
	Rid.reset(2,4);
	
	cout<<"��������ǣ�"<<Rid.getArea()<<endl;
	cout<<"�����ܳ��ǣ�"<<Rid.getPerimeter()<<endl;
	cout<<"�����볤�Ϳ�"<<endl;
	cin>>w>>h;
	Rec Rid1(w,h);
	cout<<"�¾�������ǣ�"<<Rec(w,h).getArea()<<endl; 
	cout<<"�¾��ε��ܳ��ǣ�"<<Rid1.getPerimeter()<<endl;
	return 0;
} 
