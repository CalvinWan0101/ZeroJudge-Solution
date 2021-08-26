#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	int a;
	while (cin >> a)
		if (a < 0)
			cout << "-1" << endl;
		else
			cout << oct << a << endl;
	return 0;
}
