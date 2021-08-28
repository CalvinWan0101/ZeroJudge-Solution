// 題目 : https://zerojudge.tw/ShowProblem?problemid=a623
// 作者 : Calvin Wan
// 時間 : 2021/08/27

#include <iostream>
#include <cmath>
using namespace std;
// function是用來計算階乘的函數
// ex.輸入7就會輸出1*2*3*4*5*6*7的值
long long int function(int input)
{
	long long int all = 1;
	for (int i = 1; i <= input; i++)
		all *= i;
	return all;
}
int main()
{
	int n, m;
	// 當輸入n,m的時候就依照題目敘述做計算
	while (cin >> n >> m)
		cout << function(n) / (function(m) * function(n - m)) << endl;
	return 0;
}