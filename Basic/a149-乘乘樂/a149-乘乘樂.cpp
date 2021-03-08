#include<iostream>
#include<string>
using namespace std;
int main()
{
	string a;
	int n, count;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		count = 1;
		cin >> a;
		for (int i = 0; i < a.length(); i++)
			count *= a[i] - '0';
		cout << count << endl;
	}
	return 0;
}
