// 題目 : https://zerojudge.tw/ShowProblem?problemid=a005
// 作者 : Calvin Wan
// 時間 : 2021/08/11

#include <iostream>
using namespace std;
int main()
{
	int n, sequence[5];
	cin >> n;
	while (n--)
	{
		for (int i = 0; i < 4; i++)
			cin >> sequence[i];
		// 只會有 等差級數 跟 等比級數 兩種狀況
		// 如果是等差級數
		if (sequence[1] - sequence[0] == sequence[2] - sequence[1])
			sequence[4] = sequence[3] + (sequence[1] - sequence[0]);
		// 不是等差級數的話就是等比級數
		else
			sequence[4] = sequence[3] * (sequence[1] / sequence[0]);
		for (int i = 0; i < 5; i++)
			cout << sequence[i] << ' ';
		printf("\n");
	}
	return 0;
}