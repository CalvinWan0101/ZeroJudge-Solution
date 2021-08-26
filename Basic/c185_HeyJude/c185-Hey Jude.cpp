#include <iostream>
#include <string>
using namespace std;
int main()
{
	string a;
	while (getline(cin, a))
		cout << "Hey " << a << endl;
	return 0;
}
