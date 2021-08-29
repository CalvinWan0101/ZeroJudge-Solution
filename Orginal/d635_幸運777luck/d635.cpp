// 題目 : https://zerojudge.tw/ShowProblem?problemid=d635
// 作者 : Calvin Wan
// 時間 : 2021/08/29

#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	int a;
	while (cin >> a)
		if (a < 0)
			cout << "-1" << endl;
		else
		    // 以8進位輸出a
			cout << oct << a << endl;
	return 0;
}