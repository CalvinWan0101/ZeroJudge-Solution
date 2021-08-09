// 題目 : https://zerojudge.tw/ShowProblem?problemid=a004
// 作者 : Calvin Wan
// 時間 : 2021/08/10

#include <iostream>
using namespace std;
int main()
{
	// y = 年份
	int y;
	// 僅有以下兩種為閏年,其他都是平年
	// Case1: 西元年被4整除且不被100整除
	// Case2: 被400整除
	while (cin >> y)
	{
		if (y % 4 == 0 && y % 100 != 0 || y % 400 == 0)
			cout << "閏年" << endl;
		else
			cout << "平年" << endl;
	}
	return 0;
}