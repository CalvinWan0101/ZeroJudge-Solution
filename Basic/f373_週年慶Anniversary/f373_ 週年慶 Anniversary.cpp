#include <iostream>
using namespace std;
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	int a, count0, count1;
	while (cin >> a)
	{
		count0 = a - (a / 2000 * 200);
		count1 = a - (a / 1000 * 100);
		if (count0 > count1)
			cout << count1 << " 1" << endl;
		else
			cout << count0 << " 0" << endl;
	}
	return 0;
}
