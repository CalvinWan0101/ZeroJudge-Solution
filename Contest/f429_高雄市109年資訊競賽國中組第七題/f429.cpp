// 題目 : https://zerojudge.tw/ShowProblem?problemid=f429
// 作者 : Calvin Wan
// 時間 : 2021/08/29

#include <iostream>
#include <string>
using namespace std;
int main()
{
	string a, b, c;
	while (cin >> a >> b >> c)
	// 換順序印出
		cout << b << '\n'
			 << c << '\n'
			 << a << '\n';
	return 0;
}