#ifndef RECTANG2_H
#define RECTANG2_H
class Rec
{
	public:
		Rec();
		Rec(double,double); 
		double getArea();//���ؾ������ 
		double getPerimeter();//���ؾ����ܳ� 
		void reset(double,double);//�����趨���Ϳ� 
	private:
		double width;
		double height;
}; 
#endif
