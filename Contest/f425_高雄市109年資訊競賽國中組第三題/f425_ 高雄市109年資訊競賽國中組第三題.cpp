#include <iostream>
using namespace std;
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	int x1, x2, x3, y1, y2, y3, a1, a2, b1, b2;
	cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
	a1 = x2 - x1;
	b1 = y2 - y1;
	a2 = x3 - x1;
	b2 = y3 - y1;
	if (a1 * b2 - a2 * b1 > 0)
		cout << a1 * b2 - a2 * b1 << endl;
	else
		cout << (a1 * b2 - a2 * b1) * (-1) << endl;
	return 0;
}
