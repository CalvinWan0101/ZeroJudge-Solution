// 題目 : https://zerojudge.tw/ShowProblem?problemid=a009
// 作者 : Calvin Wan
// 時間 : 2021/08/11

#include <iostream>
#include <string>
using namespace std;
int main()
{
	string a;
	// getline可以讀取到空格
	getline(cin, a);
	// a.length()是字串長度
	for (int i = 0; i < a.length(); i++)
	{
		// 依照題目敘述運用ASCII碼來計算(輸入 -7 = 答案)
		// ASCII碼參考 : http://shihyu.github.io/books/apas01.html
		char e = a[i] - 7;
		cout << e;
	}
	return 0;
}
