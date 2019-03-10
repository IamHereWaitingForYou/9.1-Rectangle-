#ifndef RECTANG2_H
#define RECTANG2_H
class Rec
{
	public:
		Rec();
		Rec(double,double); 
		double getArea();//返回矩形面积 
		double getPerimeter();//返回矩形周长 
		void reset(double,double);//重新设定长和宽 
	private:
		double width;
		double height;
}; 
#endif
