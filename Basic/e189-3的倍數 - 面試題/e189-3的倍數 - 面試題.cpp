#include <iostream>
using namespace std;
int main()
{
	int n;
	while (cin >> n)
		while (true)
			if (n < 0)
			{
				if (n == -12 || n == -9 || n == -6 || n == -3)
					cout << "YES" << '\n';
				else
					cout << "NO" << '\n';
				break;
			}
			else
				n -= 12;
	return 0;
}
