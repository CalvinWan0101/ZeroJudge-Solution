#include <iostream>
using namespace std;
int main()
{
	int min = 101;
	int max = -1;
	int n;
	int array[20];
	int buffer;
	while (cin >> n)
	{
		for (int i = 0; i < n; i++)
			cin >> array[i];
		for (int i = 0; i < n; i++)
		{
			if (array[i] > max && array[i] < 60)
				max = array[i];
			else if (array[i] < min && array[i] >= 60)
				min = array[i];
		}
		for (int i = 0; i < n - 1; i++)
			for (int j = i + 1; j < n; j++)
				if (array[i] > array[j])
				{
					buffer = array[i];
					array[i] = array[j];
					array[j] = buffer;
				}
		for (int i = 0; i < n; i++)
			if (i == n - 1)
				cout << array[i] << endl;
			else
				cout << array[i] << " ";
		if (max == -1)
			cout << "best case" << endl;
		else
			cout << max << endl;
		if (min == 101)
			cout << "worst case" << endl;
		else
			cout << min << endl;
	}
	return 0;
}
