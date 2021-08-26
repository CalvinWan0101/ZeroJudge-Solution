#include<iostream>
using namespace std;
int main()
{
	int n, m, count, array[101];
	cin >> n;
	for (int u = 0; u < n; u++)
	{
		count = 0;
		cin >> m;
		for (int i = 0; i < m; i++)
			cin >> array[i];
		for (int i = 0; i < m; i++)
			for (int j = 0; j < m; j++) {
				if (i <= j)
					continue;
				for (int k = 0; k < m; k++)
				{
					if (i <= k || j <= k)
						continue;
					if (array[i] * array[i] + array[j] * array[j] == array[k] * array[k] || array[i] * array[i] + array[k] * array[k] == array[j] * array[j] || array[j] * array[j] + array[k] * array[k] == array[i] * array[i])
						count++;
				}
			}
		cout << count << endl;
	}
	return 0;
}
