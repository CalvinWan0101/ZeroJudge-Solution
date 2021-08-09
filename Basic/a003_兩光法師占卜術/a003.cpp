// 題目 : https://zerojudge.tw/ShowProblem?problemid=a003
// 作者 : Calvin Wan
// 時間 : 2021/08/10

#include <iostream>
using namespace std;
int main()
{
	// 設定變數月份跟天數
	int month, day;
	// 利用switch分狀況分別為0,1,2的狀況,再印出題目要求印出相對應的結果
	while (cin >> month >> day)
		switch ((month * 2 + day) % 3)
		{
		case 0:
			cout << "普通" << '\n';
			break;
		case 1:
			cout << "吉" << '\n';
			break;
		case 2:
			cout << "大吉" << '\n';
			break;
		}
	return 0;
}