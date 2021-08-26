#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int a, b;
	while (cin >> a >> b)
	{
		int flag = 1;
		for (a = a; a <= b; a++)
		{
			long long int i = 1, sum = 0, p = a, p2 = a;
			while (p >= 10)
			{
				p /= 10;
				i++;
			}

			for (int j = 0; j < i; j++)
			{
				sum += pow(p2 % 10, i);
				p2 /= 10;
			}
			if (a == sum)
			{
				cout << a << " ";
				flag = 0;
			}

		}
		if (flag)
			cout << "none" << '\n';
		else
			cout << '\n';
	}
}
