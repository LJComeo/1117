#include <iostream>
#include <stack>
using namespace std;

int getLCA(int a, int b)
{
	while (a != b)
	{
		if (a > b)
		{
			a /= 2;
		}
		else
		{
			b /= 2;
		}
	}
	return a;
}

int main2()
{
	int tmp = getLCA(57530,209947);
	cout << tmp;

	return 0;
}