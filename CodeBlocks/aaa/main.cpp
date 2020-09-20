#include <iostream>
using namespace std;
#define MAX 10
bool primenumbers(unsigned int s) // prime number la so nguyen to
{
		if (s < 2)
		{
			return false;
		}
		else if (s > 2)
		{
			if (s % 2 == 0)
				return false;
			for (int i = 3; i <= sqrt((double) s); i += 2)
				if (s%i == 0)
					return false;
		}
		return true;
}


int main()
{
	unsigned int a;
	unsigned int baitap[MAX][2];
	cin >> a;



	for (int i = 0; i < a; ++i)
	{
		for (int j = 0; j < 2; ++j)
		{
			cin >> baitap[i][j];
		}
	}
	for (int i = 0; i < a; i++)
	{
		for (int x = baitap[i][0]; x <= baitap[i][1]; x++)
		{
			if (primenumbers(x) == true)
			{
				cout << x;
			cout << "\n";
			}
		}
		cout << "\n";
	}
	system ("pause");
	return 0;
}
