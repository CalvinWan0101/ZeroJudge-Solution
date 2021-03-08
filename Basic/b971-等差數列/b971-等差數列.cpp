#include <iostream>
using namespace std;
int main()
{
	int a, b, c;
	while (cin >> a >> b >> c)
	{
		int d = (b - a) / c;
		for (int e = 0; e <= d; e++)
			cout << a + e * c << " ";
	}
	return 0;
}
