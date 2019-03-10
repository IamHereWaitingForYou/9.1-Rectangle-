#include<iostream>
#include<string>
#include"Fan2.h"
#include"Fan3.cpp"
using namespace std;
int main()
{
		Fan fan1;
		cout<<"默认半径是："<<fan1.getRadius()<<endl;
		cout<<"默认速度是："<<fan1.getSpeed()<<endl;
		cout<<"默认电源状态是：关"<<endl; 
		fan1.restartPower();
		fan1.resetSpeed(3);
		fan1.resetRadius(10);
		cout<<"改变后1的速度:"<<fan1.getSpeed()<<endl;
		cout<<"改变后1的半径："<<fan1.getRadius()<<endl;
		cout<<"当前1电源状态：";
		if(fan1.getPower()==true)
		cout<<"开"<<endl;
		else cout<<"关"<<endl; 
		Fan fan2;
		fan2.turnoffPower();
		fan2.resetSpeed(2);
		fan2.resetRadius(5);
		cout<<"改变后2的速度:"<<fan2.getSpeed()<<endl;
		cout<<"改变后2的半径："<<fan2.getRadius()<<endl;
		cout<<"当前2电源状态：";
		if(fan2.getPower()==true)
		cout<<"开"<<endl;
		else cout<<"关"<<endl; 
		return 0;
} 
