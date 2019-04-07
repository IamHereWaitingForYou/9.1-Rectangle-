#include<iostream>
using namespace std;
struct Solve
{
	int begin;
	int ending;
}a[100], ins;
int main()
{
	int N;
	cin >> N;
	//N++;
int n, count = 0;
while(N--)
{
	cin >> n;
	a[n].begin = 1000;
	a[n].ending = 1000;
	count = 10;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i].begin;
		cin >> a[i].ending;
		a[i].ending--;
	}
	for (int i = 0; i < n; i++)
	for (int j = i; j < n; j++)
	{
		if (a[i].begin > a[j].begin)
		{
			ins = a[i];
			a[i] = a[j];
			a[j] = ins;
		}
	}
	for (int i = 0; i < n; i++)
	{
	//	cout<<n<<endl;
		if (a[i].ending >= a[i + 1].begin)
			count += 10;
		//	cout<<a[i].begin<<" "<<a[i].ending<<endl;
	}
	cout << count << endl;
}
	return 0;
}
