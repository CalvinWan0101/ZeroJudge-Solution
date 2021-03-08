#include <iostream>
using namespace std;
int main()
{
	int n;
	while (cin >> n)
		for (int i = 1; i <= n; i++)
		{
			for (int k = n - 1 - i; k >= 0; k--)
				cout << "_";
			for (int k = 1; k <= 1 + (i - 1) * 2; k++)
				cout << "*";
			for (int k = n - 1 - i; k >= 0; k--)
				cout << "_";
			cout << '\n';
		}
	return 0;
}
