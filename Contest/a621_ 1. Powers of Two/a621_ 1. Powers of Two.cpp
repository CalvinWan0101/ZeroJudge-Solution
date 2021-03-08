#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	unsigned long long int k;
	for (int i = 0; i <= n; i++)
	{
		k = pow(2, i);
		cout << "2^" << i << " = " << k << endl;
	}
	return 0;
}
