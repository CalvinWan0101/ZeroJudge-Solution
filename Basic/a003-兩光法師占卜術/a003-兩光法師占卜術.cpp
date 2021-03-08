#include <iostream>
using namespace std;
int main()
{
	int month, day;
	while (cin >> month >> day)
		switch ((month * 2 + day) % 3)
		{
		case 0:
			cout << "普通" << '\n';
			break;
		case 1:
			cout << "吉" << '\n';
			break;
		case 2:
			cout << "大吉" << '\n';
			break;
		}
}
