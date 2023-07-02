#include<iostream>
using namespace std;


int GCD(int x, int y)
{
	while (x != y)
	{
		if (x > y)
		{
			x = x - y;
		}
		else
		{
			y = y - x;
		}
	}
	return x;
}


int main()
{
	cout << GCD(243, 12) << endl;
}