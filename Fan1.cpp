#include<iostream>
#include<string>
#include"Fan2.h"
#include"Fan3.cpp"
using namespace std;
int main()
{
		Fan fan1;
		cout<<"Ĭ�ϰ뾶�ǣ�"<<fan1.getRadius()<<endl;
		cout<<"Ĭ���ٶ��ǣ�"<<fan1.getSpeed()<<endl;
		cout<<"Ĭ�ϵ�Դ״̬�ǣ���"<<endl; 
		fan1.restartPower();
		fan1.resetSpeed(3);
		fan1.resetRadius(10);
		cout<<"�ı��1���ٶ�:"<<fan1.getSpeed()<<endl;
		cout<<"�ı��1�İ뾶��"<<fan1.getRadius()<<endl;
		cout<<"��ǰ1��Դ״̬��";
		if(fan1.getPower()==true)
		cout<<"��"<<endl;
		else cout<<"��"<<endl; 
		Fan fan2;
		fan2.turnoffPower();
		fan2.resetSpeed(2);
		fan2.resetRadius(5);
		cout<<"�ı��2���ٶ�:"<<fan2.getSpeed()<<endl;
		cout<<"�ı��2�İ뾶��"<<fan2.getRadius()<<endl;
		cout<<"��ǰ2��Դ״̬��";
		if(fan2.getPower()==true)
		cout<<"��"<<endl;
		else cout<<"��"<<endl; 
		return 0;
} 
