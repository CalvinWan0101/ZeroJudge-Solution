#include<iostream>
#include<string>
using namespace std;
int main()
{
	string a, b;
	int start, end;
	while (getline(cin, a))
	{
		getline(cin, b);
		start = 0;
		while (true)
		{
			for (end = start; end < a.length(); end++)
				if (a[end] == ' ')
					break;
			cout << b << ", ";
			if (end != a.length() - 1)
				for (int i = start; i < end; i++)
					cout << a[i];
			else if (end == a.length() - 1)
				for (int i = start; i <= end; i++)
					cout << a[i];
			cout << '\n';
			if (end >= a.length() - 1)
				break;
			else
				start = end + 1;
		}
	}
	return 0;
}
