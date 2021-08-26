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
		for (int i = a.length() - 1; i >= 0; i--)
			cout << a[i];
		cout << endl;
	}
	return 0;
}
