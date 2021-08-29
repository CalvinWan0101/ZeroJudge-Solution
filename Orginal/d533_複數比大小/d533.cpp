// 題目 : https://zerojudge.tw/ShowProblem?problemid=d533
// 作者 : Calvin Wan
// 時間 : 2021/08/29

#include <iostream>
using namespace std;
int main()
{
	float a, b, c, d, n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> a >> b >> c >> d;
		// i的係數為0才能比大小
		if (b == 0 && d == 0)
		{
			if (a > c)
				cout << ">" << endl;
			else if (a == c)
				cout << "=" << endl;
			else
				cout << "<" << endl;
		}
		// 否則無法比大小
		else
			cout << "No" << endl;
	}
	return 0;
}