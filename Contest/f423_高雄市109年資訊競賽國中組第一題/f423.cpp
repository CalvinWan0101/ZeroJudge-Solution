#include <iostream>
using namespace std;
int main()
{
	int n, i = 0;
	cin >> n;
	int count = 0;
	for (int i = 1;; i += 2)
	{
		if (i > n)
			break;
		count += i;
	}
	while (i <= n)
	{
	}
	cout << count << endl;
	return 0;
}