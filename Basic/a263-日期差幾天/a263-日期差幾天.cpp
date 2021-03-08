#include <iostream>
using namespace std;
int arr[12] = { 31,0,31,30,31,30,31,31,30,31,30,31 };
int fun(int y, int m, int d)
{
	int year = (y - 1) * 365 + (y - 1) / 4 - (y - 1) / 100 + (y - 1) / 400;
	if (y % 4 == 0 && y % 100 != 0 && y != 0 || y % 400 == 0 && y != 0)
		arr[1] = 29;
	else
		arr[1] = 28;
	int month = 0;
	for (int i = 0; i < m - 1; i++)
		month += arr[i];
	return  year + month + d;
}
int main()
{
	int a, b, c, x, y, z;
	while (cin >> a >> b >> c >> x >> y >> z)
	{
		int p = fun(a, b, c), q = fun(x, y, z);
		if (p - q < 0)
			cout << q - p << endl;
		else
			cout << p - q << endl;
	}
	return 0;
}
