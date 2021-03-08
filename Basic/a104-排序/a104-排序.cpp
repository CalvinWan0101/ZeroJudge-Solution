#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	int a;
	int array[1000] = { 0 };
	while (cin >> a)
	{
		for (int i = 0; i < a; i++)
			cin >> array[i];
		int buffer;
		for (int i = 0; i < a - 1; i++)
			for (int j = i; j < a; j++)
				if (array[i] > array[j])
				{
					buffer = array[j];
					array[j] = array[i];
					array[i] = buffer;
				}
		for (int i = 0; i < a; i++)
			if (i == a - 1)
				cout << array[i] << '\n';
			else
				cout << array[i] << " ";
	}
}
