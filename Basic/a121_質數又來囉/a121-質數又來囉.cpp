#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int a, b, n, j, flag, count;
	while (cin >> a >> b)
	{
		count = 0;
		for (n = a; n <= b; n++)
		{
			if (n == 1)
				continue;
			flag = 1;
			j = 2;
			while (j <= sqrt(n))
				if ((n % j) == 0)
				{
					flag = 0;
					break;
				}
				else
					j++;
			if (flag != 0)
				count++;
		}
		cout << count << '\n';
	}
}
