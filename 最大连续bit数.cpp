#include <iostream>
using namespace std;

int main3()
{
	int n;
	while (cin >> n)
	{
		int count = 0; 
		int max = 0;
		int i = 0;
		for (; i < 32;)
		{
			while (n & (1 << i) && (i < 32))
			{
				count++;
				i++;
			}
			if (count > max)
			{
				max = count;
			}
			count = 0;
			i++;
		}
		cout << max << endl;
	}
	
	return 0;
}