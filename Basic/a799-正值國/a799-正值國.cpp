#include <iostream>
using namespace std;
int main(int argc, char** argv)
{
	int a;
	while (cin >> a)
		cout << ((a < 0) ? a * (-1) : a);
	return 0;
}
