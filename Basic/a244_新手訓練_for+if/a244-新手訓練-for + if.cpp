#include <iostream>
using namespace std;
int main()
{
	int a, n;
	long long int b, c;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cin >> a >> b >> c;
		switch (a)
		{
		case 1:
			cout << b + c << endl;
			break;
		case 2:
			cout << b - c << endl;
			break;
		case 3:
			cout << b * c << endl;
			break;
		case 4:
			cout << b / c << endl;
			break;
		}
	}
	return 0;
}
