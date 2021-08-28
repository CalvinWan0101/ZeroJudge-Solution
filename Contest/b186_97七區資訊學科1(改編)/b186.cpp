// 題目 : https://zerojudge.tw/ShowProblem?problemid=b186
// 作者 : Calvin Wan
// 時間 : 2021/08/27

#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	// 每買10個餅乾+2個蛋糕送1盒巧克力
	// 則取a/10,c/2中較小者
	unsigned long long int a, b, c;
	while (cin >> a >> b >> c)
		cout << a << " 個餅乾，" << b + min(a / 10, c / 2) << " 盒巧克力，" << c << " 個蛋糕。" << endl;
	return 0;
}