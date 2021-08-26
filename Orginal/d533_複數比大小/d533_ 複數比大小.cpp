#include <iostream>
using namespace std;
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	double a, b, c, d, n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> a >> b >> c >> d;
		if (b == 0 && d == 0)
		{
			if (a > c)
				cout << ">" << endl;
			else if (a == c)
				cout << "=" << endl;
			else
				cout << "<" << endl;
		}
		else
			cout << "No" << endl;
	}
	return 0;
}
