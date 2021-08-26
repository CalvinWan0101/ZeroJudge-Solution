// 題目 : https://zerojudge.tw/ShowProblem?problemid=a010
// 作者 : Calvin Wan
// 時間 : 2021/08/11

#include <iostream>
using namespace std;
int main()
{
	// n表示輸入的數字
	int n, count;
	cin >> n;
	// 因數分解從2開始到n結束(質因數的因數只有1和自己)
	for (int i = 2; i <= n; i++)
	{
		// count用來記錄當前因數已經除過幾次了
		count = 0;
		// n%i=0 表示當前的這個i為n的因數
		while (n % i == 0)
		{
			// 記錄用的count這時候要+1
			count++;
			// 同時更新n
			n /= i;
		}
		if (count == 1)
			cout << i << ((n == 1) ? "\n" : " * ");
		// if (n == 1)
		// 	cout << i << "\n";
		// else
		// 	cout << i << " * ";
		else if (count > 1)
		// if (n == 1)
		// 	cout << i << "^" << count << "\n";
		// else
		// 	cout << i << "^" << count << " * ";
		cout << i << "^" << count << ((n == 1) ? "\n" : " * ");
	}
	return 0;
}