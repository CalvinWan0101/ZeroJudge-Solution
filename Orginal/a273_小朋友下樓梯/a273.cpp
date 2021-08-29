// 題目 : https://zerojudge.tw/ShowProblem?problemid=a273
// 作者 : Calvin Wan
// 時間 : 2021/08/29

#include <iostream>
using namespace std;
int main()
{
	long long int a, b;
	while (cin >> a >> b)
		if (a == 0)
			cout << "Ok!" << endl;
		//a!=0 && b==0
		else if (b == 0)
			cout << "Impossib1e!" << endl;
		// a!=0 && b!=0
		else if (a % b == 0)
			cout << "Ok!" << endl;
		// 其他都是Impossible!
		else
			cout << "Impossib1e!" << endl;
	return 0;
}