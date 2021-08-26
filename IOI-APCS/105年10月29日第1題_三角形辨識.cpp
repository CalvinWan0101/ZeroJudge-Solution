#include <iostream>
using namespace std;
int main()
{
	int array[3];
	int buffer, a, b, c;
	while (cin >> array[0] >> array[1] >> array[2])
	{
		for (int i = 0; i < 2; i++)
			for (int j = i + 1; j < 3; j++)
				if (array[i] > array[j])
				{
					buffer = array[i];
					array[i] = array[j];
					array[j] = buffer;
				}
		a = array[0];
		b = array[1];
		c = array[2];
		cout << a << " " << b << " " << c << endl;
		int d = a * a + b * b;
		if (a + b <= c)
			cout << "No" << endl;
		else
		{
			if (d < c * c)
				cout << "Obtuse" << endl;
			else if (d == c * c)
				cout << "Right" << endl;
			else if (d > c * c)
				cout << "Acute" << endl;
		}
	}
	return 0;
}