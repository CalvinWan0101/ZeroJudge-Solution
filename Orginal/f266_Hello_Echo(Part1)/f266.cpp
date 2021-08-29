// 題目 : https://zerojudge.tw/ShowProblem?problemid=f266
// 作者 : Calvin Wan
// 時間 : 2021/08/29

#include <iostream>
using namespace std;
int main()
{
	string a[5];
	for (int i = 0; i < 5; i++)
		cin >> a[i];
	// 從輸出5個到4個到3個一直到1個
	for (int i = 0; i < 5; i++)
	{
		for (int j = i; j < 5; j++)
			cout << a[j] << ' ';
		cout << endl;
	}
	return 0;
}