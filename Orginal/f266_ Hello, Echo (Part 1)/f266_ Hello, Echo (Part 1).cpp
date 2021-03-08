#include <iostream>
using namespace std;
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	string a[5];
	for (int i = 0; i < 5; i++)
		cin >> a[i];
	for (int i = 0; i < 5; i++)
	{
		for (int j = i; j < 5; j++)
			cout << a[j] << ' ';
		cout << endl;
	}
	return 0;
}
