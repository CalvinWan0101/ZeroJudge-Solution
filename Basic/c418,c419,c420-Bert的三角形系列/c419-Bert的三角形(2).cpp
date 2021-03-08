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
			for (int j = 1; j <= i; j++)
				cout << "*";
			cout << '\n';
		}
	return 0;
}
