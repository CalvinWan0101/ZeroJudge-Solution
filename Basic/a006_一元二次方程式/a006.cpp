// 題目 : https://zerojudge.tw/ShowProblem?problemid=a006
// 作者 : Calvin Wan
// 時間 : 2021/08/11

// pow跟sqrt的結果都是倍精度的，如果處理的數字太大可能會有誤差
#include <iostream>
#include <cmath>
using namespace std;
int main(int argc, char **argv)
{
	int a, b, c;
	int x1, x2, x3;
	cin >> a >> b >> c;
	// 判別式>0 則有兩相異根
	if (pow(b, 2) - 4 * a * c > 0)
	{
		// 帶入公式
		x1 = (-b + sqrt(b * b - 4 * a * c)) / (2 * a);
		x2 = (-b - sqrt(b * b - 4 * a * c)) / (2 * a);
		if (x1 > x2)
			cout << "Two different roots x1=" << x1 << " , x2=" << x2 << '\n';
		else if (x1 < x2)
			cout << "Two different roots x1=" << x2 << " , x2=" << x1 << '\n';
	}
	// 判別式=0 則有一根
	else if ((pow(b, 2) - 4 * a * c) == 0)
	{
		x3 = (-b + sqrt(b * b - 4 * a * c)) / (2 * a);
		cout << "Two same roots x=" << x3 << '\n';
	}
	// 判別式<0 無實根
	else
		cout << "No real root" << '\n';
	return 0;
}