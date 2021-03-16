#include <iostream>
#include <string>
using namespace std;
int main()
{
	int a, b;
	string c;
	int array[1001];
	while (cin >> c)
	{
		a = 0; b = 0;
		for (int i = 0; i < c.length(); i++)
		{
			array[i] = c[i];
			array[i] -= 48;
		}
		for (int i = 0; i < c.length(); i += 2)
			a += array[i];
		for (int i = 1; i < c.length(); i += 2)
			b += array[i];
		if (a > b)
			cout << a - b << endl;
		else
			cout << b - a << endl;
	}
}
