// 題目 : https://zerojudge.tw/ShowProblem?problemid=f424
// 作者 : Calvin Wan
// 時間 : 2021/08/29

#include <iostream>
using namespace std;
int main()
{
	// 先把49項全部填進陣列
	unsigned long long int array[50];
	array[1] = 1;
	array[2] = 3;
	for (int i = 3; i < 50; i++)
		array[i] = array[i - 1] + array[i - 2];
	int n;
	// 需要哪一格再把哪一格印出來
	while (cin >> n)
		cout << array[n] << endl;
	return 0;
}