// 題目 : https://zerojudge.tw/ShowProblem?problemid=d046
// 作者 : Calvin Wan
// 時間 : 2021/08/29

#include <iostream>
using namespace std;
int main()
{
	int n, input, count = 0;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		// 當輸入input的時候判斷如果<=10就記錄一次
		cin >> input;
		if (input <= 10)
			count++;
	}
	cout << count << endl;
	return 0;
}