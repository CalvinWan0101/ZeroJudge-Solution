#include <iostream>
#include <string>
using namespace std;
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	string a;
	while (cin >> a)
	{
		for (int i = 1; i < a.length() - 1; i++)
			a[i] = '_';
		cout << a << endl;
	}
	return 0;
}
