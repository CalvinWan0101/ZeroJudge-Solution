#include <iostream>
using namespace std;
int main()
{
	int n;
	while (cin >> n)
		cout << 1 + n * (n - 1) / 2 << '\n';
}
