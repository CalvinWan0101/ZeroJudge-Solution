#include <iostream>
#include <string>
using namespace std;
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	string input;
	cin >> input;
	for (int i = input.length() - 1; i >= 0; i--)
	{
		for (int j = 0; j <= i; j++)
			cout << input[j];
		cout << endl;
	}
	return 0;
}
