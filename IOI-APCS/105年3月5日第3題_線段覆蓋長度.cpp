#include <iostream>
using namespace std;
int main()
{
	int array[10000][2];
	int n, buffer, count;
	while (cin >> n)
	{
		count = 0;
		for (int i = 0; i < n; i++)
			cin >> array[i][0] >> array[i][1];
		for (int i = 0; i < n - 1; i++)
			for (int j = i + 1; j < n; j++)
				if (array[i][0] > array[j][0])
				{
					buffer = array[i][0];
					array[i][0] = array[j][0];
					array[j][0] = buffer;
					buffer = array[i][1];
					array[i][1] = array[j][1];
					array[j][1] = buffer;
				}
		for (int i = 0; i < n - 1; i++)
			for (int j = i + 1; j < n; j++)
			{
				if (array[j][0] == -1 && array[j][1] == -1)
					continue;
				if (array[i][1] >= array[j][0])
				{
					if (array[j][1] > array[i][1])
						array[i][1] = array[j][1];
					array[j][0] = -1;
					array[j][1] = -1;
				}
			}
		for (int i = 0; i < n; i++)
			count += (array[i][1] - array[i][0]);
		cout << count << endl;
	}
	return 0;
}