#include <iostream>
#include <cmath>
using namespace std;
long long int function(int input)
{
	long long int all = 1;
	for (int i = 1; i <= input; i++)
		all *= i;
	return all;
}
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n, m;
	while (cin >> n >> m)
		cout << function(n) / (function(m) * function(n - m)) << endl;
	return 0;
}
