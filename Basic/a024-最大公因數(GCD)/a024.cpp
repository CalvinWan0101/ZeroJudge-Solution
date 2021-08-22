// 題目 : https://zerojudge.tw/ShowProblem?problemid=a024
// 作者 : Calvin Wan
// 時間 : 2021/08/22

#include <iostream>
#include <algorithm>
using namespace std;

int GCD(int a, int b)
{
	// 使用輾轉相除法
	// 參考影片 : https://www.youtube.com/watch?v=fGesPF3QA1U
	if (a % b == 0)
		return b;
	else
		return GCD(b, a % b);
}
int main()
{
	int a, b;
	while (cin >> a >> b)
		cout << GCD(a, b) << endl;
	return 0;
}