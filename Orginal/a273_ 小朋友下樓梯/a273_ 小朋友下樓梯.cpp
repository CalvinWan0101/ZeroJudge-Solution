#include <iostream>
using namespace std;
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	long long int a, b;
	while (cin >> a >> b)
		if (a == 0)
			cout << "Ok!" << endl;
		//a!=0 && b==0
		else if (b == 0)
			cout << "Impossib1e!" << endl;
		// a!=0 && b!=0
		else if (a % b == 0)
			cout << "Ok!" << endl;
		else
			cout << "Impossib1e!" << endl;
	return 0;
}
