#ifndef CKEY_H
#define CKEY_H
#include<string>
class Ckey
{
	public:
		Ckey();
		bool getResFirst();
		bool getResSec();
		bool getResThr();
		void reSet(std::string);
		bool check();
	private:
		std::string a;
	
};
#endif
