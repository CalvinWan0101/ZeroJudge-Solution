#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	int a, b, c;
	int array[3];
	while (cin >> a >> b)
	{
		if (a == b)
		{
			if (a > 2147483647)
				cout << a - 2147483647 << "2147483647 " << "=" << b << endl;
			else if(a<=5)
				cout << b - 3 << "+3=" << b << endl;
			else
				cout << "3+" << b - 3 << "=" << b << endl;
		}
		else
		{
			c = a - b;
			if (c < 0)
				c *= -1;
			array[0] = a;
			array[1] = b;
			array[2] = c;
			for (int i = 0; i < 2; i++)
				for (int j = i + 1; j < 3; j++)
					if (array[i] > array[j])
					{
						a = array[i];
						array[i] = array[j];
						array[j] = a;
					}

			cout << array[0] << "+" << array[1] << "=" << array[2] << endl;
		}
	}
	return 0;
}
