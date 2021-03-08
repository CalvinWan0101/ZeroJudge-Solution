#include<iostream>
using namespace std;
int main()
{
	int array[51];
	for (int i = 0; i < 51; i++)
		array[i] = i * i;
	int n;
	int a, b;
	int max, min;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		int count = 0;
		cin >> a >> b;
		for (int i = 0; i < 51; i++)
			if (array[i] >= a)
			{
				min = i;
				break;
			}
		for (int i = 51; i >= 0; i--)
			if (array[i] <= b)
			{
				max = i;
				break;
			}
		for (int i = min; i <= max; i++)
			count += array[i];
		cout << "Case " << i << ": " << count << '\n';
	}
}
