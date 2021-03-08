#include<iostream>
#include<string>
using namespace std;
int main()
{
	string a;
	int buffer;
	while (getline(cin, a))
		for (int i = 0; i < a.length(); i++)
		{
			buffer = a[i];
			if (i != a.length() - 1)
				cout << buffer << "_";
			else
				cout << buffer << '\n';
		}
	return 0;
}
