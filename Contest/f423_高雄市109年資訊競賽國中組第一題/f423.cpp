// 題目 : https://zerojudge.tw/ShowProblem?problemid=f423
// 作者 : Calvin Wan
// 時間 : 2021/08/29

#include <iostream>
using namespace std;
int main()
{
	// i每次用來加的數字,count則是最終的結果
	int n, i = 1, count = 0;
	cin >> n;
	while (i <= n)
	{
		count += i;
		// 更新i
		i += 2;
	}
	cout << count << endl;
	return 0;
}