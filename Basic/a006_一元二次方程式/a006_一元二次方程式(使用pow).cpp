#include <iostream>
#include<cmath>
using namespace std;
int main(int argc, char** argv)
{
	int a, b, c;
	int  x1, x2, x3;
	cin >> a >> b >> c;
	if (pow(b, 2) - 4 * a * c > 0)
	{
		//Two different roots x1=2 , x2=-5
		x1 = (-b + sqrt(b * b - 4 * a * c)) / (2 * a);
		x2 = (-b - sqrt(b * b - 4 * a * c)) / (2 * a);
		if (x1 > x2)
			cout << "Two different roots x1=" << x1 << " , x2=" << x2 << '\n';
		else if (x1 < x2)
			cout << "Two different roots x1=" << x2 << " , x2=" << x1 << '\n';
	}
	else if ((pow(b, 2) - 4 * a * c) == 0)
	{
		x3 = (-b + sqrt(b * b - 4 * a * c)) / (2 * a);
		cout << "Two same roots x=" << x3;
	}
	else
		cout << "No real root";
	return 0;
}
