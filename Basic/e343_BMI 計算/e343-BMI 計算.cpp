#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	double a, b;
	while (cin >> a >> b)
		cout << fixed << setprecision(1) << a / ((b / 100) * (b / 100)) << '\n';
	return 0;
}
