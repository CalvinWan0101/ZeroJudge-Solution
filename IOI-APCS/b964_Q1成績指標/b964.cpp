// 題目 : https://zerojudge.tw/ShowProblem?problemid=b964
// 作者 : Calvin Wan
// 時間 : 2021/08/30

#include <iostream>
#include <algorithm>
using namespace std;
int main()
{

	int min = 101, max = -1, n, array[20];
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> array[i];
		// 同時滿足大於max以及不及格
		if (array[i] > max && array[i] < 60)
			max = array[i];
		// 同時滿足小於min以及及格
		if (array[i] < min && array[i] >= 60)
			min = array[i];
	}
	sort(array, array + n);
	for (int i = 0; i < n; i++)
		cout << array[i] << " ";
	cout << '\n';
	// 如果max的值沒有變(找不到不及格的人)
	if (max == -1)
		cout << "best case\n";
	else
		cout << max << '\n';
	// 如果min的值沒有變(找不到及格的人)
	if (min == 101)
		cout << "worst case\n";
	else
		cout << min << '\n';
	return 0;
}