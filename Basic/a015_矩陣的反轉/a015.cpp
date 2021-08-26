// 題目 : https://zerojudge.tw/ShowProblem?problemid=a015
// 作者 : Calvin Wan
// 時間 : 2021/08/18

#include <iostream>
using namespace std;
int main()
{
	// 陣列before放置輸入的原始陣列
	int before[101][101];
	// 陣列after放置旋轉後的陣列
	int after[101][101];
	int row, column;
	while (cin >> row >> column)
	{
		for (int i = 1; i <= row; i++)
			for (int j = 1; j <= column; j++)
			{
				// 輸入的時候順便顛倒i,j放在after陣列
				cin >> before[i][j];
				after[j][i] = before[i][j];
			}
		// 把after陣列印出來
		for (int i = 1; i <= column; i++)
		{
			for (int j = 1; j <= row; j++)
				cout << after[i][j] << " ";
			cout << '\n';
		}
	}
	return 0;
}