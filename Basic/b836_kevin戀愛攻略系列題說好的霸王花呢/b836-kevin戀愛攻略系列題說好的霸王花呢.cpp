#include <iostream>
using namespace std;
int main()
{
	long long int n, m;
	while (cin >> n >> m)
	{
		if (m == 0)
			cout << "Go Kevin!!" << endl;
		else
			while (true)
			{
				n -= m;
				if (n == 1)
				{
					cout << "Go Kevin!!" << endl;
					break;
				}
				else if (n < 1)
				{
					cout << "No Stop!!" << endl;
					break;
				}
			}
	}
	return 0;
}
