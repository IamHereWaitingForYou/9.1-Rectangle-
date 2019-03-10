#ifndef FAN2_H
#define FAN2_H
class Fan
{
	public:
		Fan();
		int getSpeed();
		int getPower();
		double getRadius();
		void resetSpeed(int);
		void resetRadius(double); 
		void restartPower();
		void turnoffPower();
	
	private:
		int speed;
		bool on;
		double radius;
};
#endif
