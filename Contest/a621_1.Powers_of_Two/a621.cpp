// 題目 : https://zerojudge.tw/ShowProblem?problemid=a621
// 作者 : Calvin Wan
// 時間 : 2021/08/27

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int n;
	cin >> n;
	// pow的輸出的資料形態是double
	// 轉換成int就可以AC了
	for (int i = 0; i <= n; i++)
		cout << "2^" << i << " = " << int(pow(2, i)) << endl;
	return 0;
}