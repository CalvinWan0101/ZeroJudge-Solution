#include<iostream>
#include<string>
using namespace std;
int main()
{
	string a;
	int start;
	while (cin >> a)
	{
		start = 0;
		while (true)
		{
			for (int i = start; i < start + a.length(); i++)
			{
				if (i > a.length() - 1)
					cout << a[i % a.length()];
				else
					cout << a[i];
			}
			cout << '\n';
			if (start == a.length() - 1)
				break;
			else
				start++;
		}
	}
	return 0;
}
