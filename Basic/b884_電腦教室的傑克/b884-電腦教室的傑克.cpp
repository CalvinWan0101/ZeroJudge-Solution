#include <iostream>
using namespace std;
int main()
{
	double x, y, a;
	int n;
	while (cin >> n)
		for (int i = 0; i < n; i++)
		{
			cin >> x >> y;
			a = 100 - (x + y);
			if (a <= 30 && a > 0)
				cout << "sad!" << endl;
			else if (a <= 60 && a > 0)
				cout << "hmm~~" << endl;
			else if (a < 100 && a>0)
				cout << "Happyyummy" << endl;
			else
				cout << "evil!!" << endl;
		}
	return 0;
}
