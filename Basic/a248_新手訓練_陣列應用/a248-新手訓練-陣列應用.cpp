#include <iostream>
using namespace std;
int main()
{
	int a, b, n;
	while (cin >> a >> b >> n)
	{
		cout << a / b << ".";
		a %= b;
		for (int i = 1; i <= n; i++)
		{
			cout << a * 10 / b;
			a = (a * 10) % b;
		}
		cout << endl;
	}
	return 0;
}
