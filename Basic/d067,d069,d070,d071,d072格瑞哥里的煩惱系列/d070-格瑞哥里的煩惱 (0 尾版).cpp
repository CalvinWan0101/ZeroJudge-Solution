#include <iostream>
using namespace std;
int main()
{
	int a;
	while (cin >> a)
	{
		if (a == 0)
			break;
		if (a % 4 == 0 & a % 100 != 0 || a % 400 == 0)
			cout << "a leap year" << '\n';
		else
			cout << "a normal year" << '\n';
	}
	return 0;
}
