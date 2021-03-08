#include<iostream>
using namespace std;
int main()
{
	long long unsigned f[30001] = { 0 }, g[30001] = { 0 };
	f[1] = 1; g[1] = 1;
	for (int i = 2; i <= 30000; i++)
		f[i] = i + f[i - 1];
	for (int i = 2; i <= 30000; i++)
		g[i] = f[i] + g[i - 1];
	int a;
	while (cin >> a)
		cout << f[a] << " " << g[a] << endl;
	return 0;
}
