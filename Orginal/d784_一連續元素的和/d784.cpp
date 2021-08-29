// 題目 : https://zerojudge.tw/ShowProblem?problemid=d784
// 作者 : Calvin Wan
// 時間 : 2021/08/29

#include<iostream>
using namespace std;
int main()
{
	int n, m;
	int array[101];
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int max = -1;
		cin >> m;
		for (int i = 0; i < m; i++)
			cin >> array[i];
		for (int i = 0; i < m; i++)
		{
			int count = 0;
			for (int j = i; j < m; j++)
			{
				count += array[j];
				if (count > max)
					max = count;
			}
		}
		cout << max << endl;
	}
	return 0;
}