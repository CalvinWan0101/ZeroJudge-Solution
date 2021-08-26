#include <iostream>
using namespace std;
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n, count, max, array[10000];
	while (cin >> n)
	{
		if (n == 0)
			break;
		count = 0;
		max = -100000;
		for (int i = 0; i < n; i++)
			cin >> array[i];
		for (int i = 0; i < n - 1; i++)
		{
			for (int j = i; j < n; j++)
			{
				count += array[j];
				if (count > max)
					max = count;
			}
			count = 0;
		}
		if (max > 0)
			cout << "The maximum winning streak is " << max << "." << endl;
		else
			cout << "Losing streak." << endl;
	}
	return 0;
}
