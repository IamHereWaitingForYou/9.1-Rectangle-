#include"Fan2.h"
using namespace std;
Fan::Fan()
{
	speed=1;
	radius=5;
	on=false;
}
int Fan::getSpeed()
{
	return speed;
}
int Fan::getPower()
{
	return on;
}
double Fan::getRadius()
{
	return radius;
}
void Fan::resetSpeed(int s)
{
	if(s==1||s==2||s==3)
	speed=s;
	else
	return;
}
void Fan::resetRadius(double r)
{
	radius=r;
}
void Fan::restartPower()
{
	on=true;
}
void Fan::turnoffPower()
{
	on=false;
}

 
