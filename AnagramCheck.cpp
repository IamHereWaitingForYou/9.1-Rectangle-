#include "pch.h"
#include <iostream>
#include<algorithm>
#include<string>
using namespace std;
bool isAngram(const string & s1, const string& s2)
{
	string S1, S2;
	S1 = s1;
	S2 = s2;
 sort(S1.begin(), S1.end());
 sort(S2.begin(), S2.end());
 if (S1 == S2)
	 return true;
 else
	 return false;
}
int main()
{
    std::cout << "Enter a string  s1:"<<std::endl;
	string s1;
	std::cin >> s1;
	cout << "Enter a string s2" << endl;
	string s2;
	std::cin >> s2;
	bool a;
	a=isAngram(s1, s2);
	if (a == true)
		cout << s1 << " and " << s2 << " are anagrams" << endl;
	else
		cout << s1 << " and " << s2 << " are not anagrams" << endl;
	return 0;
}
