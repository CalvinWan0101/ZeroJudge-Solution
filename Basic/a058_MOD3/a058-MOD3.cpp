#include<iostream>
using namespace std;
int main()
{
	int a = 0, b = 0, c = 0;
	int n;
	int array[10000];
	while (cin >> n)
	{
		a = b = c = 0;
		for (int i = 1; i <= n; i++)
			cin >> array[i];
		for (int i = 1; i <= n; i++)
			if (i % 3 == 0)
				a++;
			else if (i % 3 == 1)
				b++;
			else if (i % 3 == 2)
				c++;
		cout << b << " " << a << " " << c << endl;
	}
	return 0;
}
