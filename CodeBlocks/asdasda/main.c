#include <iostream>
#include <string>
using namespace std;
void daonguocso(string a)
{
	int l = a.length();
	for (int i = 0; i < l; i++)
		while (a[l - 1] = '0')
			--l;
	for (int i = 0; i < l; i++)
	{
		a[i] = a[l - 1 - i];
	}
}
int tinhsotrongmang(string a)
{
	int d=0;
	int l = a.length();
	for (int i = 0; i < l; i++)
	{

		d += a[i] * 10 ^ (l - i);
	}
	return d;
}
int main()
{
	string a;
	cin >> a;
	daonguocso(a);
	int b = tinhsotrongmang(a);
	cout << b;
	system("pause");
	return 0;
}
