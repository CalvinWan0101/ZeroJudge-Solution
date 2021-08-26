#include <iostream>
using namespace std;
int main()
{
	int a, b;
	char c;
	while (cin >> a >> c >> b)
		switch (c)
		{
		case '+':
			cout << a + b << '\n';
			break;
		case '-':
			cout << a - b << '\n';
			break;
		case '*':
			cout << a * b << '\n';
			break;
		case '/':
			cout << a / b << '\n';
			break;
		}
	return 0;
}
