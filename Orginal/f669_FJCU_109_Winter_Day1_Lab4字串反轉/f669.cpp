// 題目 : https://zerojudge.tw/ShowProblem?problemid=f669
// 作者 : Calvin Wan
// 時間 : 2021/08/29

#include <iostream>
#include <string>
using namespace std;
int main()
{
	string a;
	cin >> a;
	// 將字串倒過來輸出
	for (int i = a.length() - 1; i >= 0; i--)
		cout << a[i];
	return 0;
}