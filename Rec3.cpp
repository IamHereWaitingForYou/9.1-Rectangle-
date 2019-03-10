#include<iostream>
#include"Rectangle2.h"
using namespace std;
Rec::Rec()
{
	width=1;
	height=1;
}
Rec::Rec(double a, double b)
{
	width=a;
	height=b;
}
double Rec::getArea()
{
	return width*height;
}
double Rec::getPerimeter()
{
	return 2*(width+height);
}
void Rec::reset(double a,double b)
{
	width=a;
	height=b;
}
