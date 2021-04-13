#include <bits/stdc++.h>
using namespace std;
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	int a, b, suma = 0, sumb = 0, buffer;
	cin >> a >> b;
	for (int i = 0; i < a; i++)
	{
		cin >> buffer;
		suma += buffer;
	}
	for (int i = 0; i < b; i++)
	{
		cin >> buffer;
		sumb += buffer;
	}
	if (suma > sumb && a > b)
		cout << "Yes" << endl;
	else
		cout << "No" << endl;
	return 0;
}
