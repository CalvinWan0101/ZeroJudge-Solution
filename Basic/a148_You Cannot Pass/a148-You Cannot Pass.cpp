#include <iostream>
using namespace std;
int main()
{
	int n, sum, buffer;
	while (cin >> n)
	{
		sum = 0;
		for (int i = 0; i < n; i++)
		{
			cin >> buffer;
			sum += buffer;
		}
		if (sum <= 59 * n)
			cout << "yes" << '\n';
		else
			cout << "no" << '\n';
	}
}
