#include <iostream>
using namespace std;
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	unsigned long long int n;
	while (cin >> n)
		cout << (n/2) * (n/2) / 4 << endl;
	return 0;
}
