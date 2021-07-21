#include <iostream>
using namespace std;
int main()
{
	int t;
	int a, b, c, d, e;
	cin >> t;
	while (t--)
	{
		cin >> a >> b >> c >> d;
		if (b - a == d - c)
			e = d + (b - a);
		else
			e = d * (b / a);
		cout << a << " " << b << " " << c << " " << d << " " << e << " " << '\n';
	}
}
