#include <iostream>
using namespace std;
int main()
{
	int a, b, c = 0, d = 0;
	while (cin >> a >> b)
	{
		while (a && b)
		{
			if (a >= 12)
			{
				a -= 11;
				c++;
			}
			else
			{
				a++;
				b--;
			}
		}
		cout << c << endl;
	}
	return 0;
}
