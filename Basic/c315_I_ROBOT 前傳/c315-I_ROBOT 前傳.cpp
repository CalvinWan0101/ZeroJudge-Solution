#include <iostream>
using namespace std;
int main()
{
	int x, y, a, b, n;
	while (cin >> n)
	{
		x = y = 0;
		for (int i = 0; i < n; i++)
		{
			cin >> a >> b;
			switch (a)
			{
			case 0:y += b; break;
			case 1:x += b; break;
			case 2:y -= b; break;
			case 3:x -= b; break;
			}
		}
		cout << x << " " << y << endl;
	}
	return 0;
}
