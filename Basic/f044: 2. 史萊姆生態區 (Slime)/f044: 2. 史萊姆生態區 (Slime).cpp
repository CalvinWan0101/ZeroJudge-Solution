#include <iostream>
using namespace std;
int main()
{
	int a, b, c, count;
	while (cin >> a >> b)
	{
		count = 0;
		if (a != 1)
		{
			b /= a;
			a = 1;
		}
		c = a + b;
		while (true)
		{
			if (c != 1)
			{
				c /= 2;
				count++;
			}
			else
				break;
		}
		cout << count << endl;
	}
	return 0;
}
