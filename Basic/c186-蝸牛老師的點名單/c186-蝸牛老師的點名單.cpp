#include<iostream>
#include<string>
using namespace std;
int main()
{
	string a;
	int start, end;
	while (getline(cin, a))
	{
		start = 0;
		while (true)
		{
			for (end = start; end < a.length(); end++)
				if (a[end] == ' ')
					break;
			if (end != a.length() - 1)
				for (int i = start; i < end; i++)
					cout << a[i];
			else
				for (int i = start; i <= end; i++)
					cout << a[i];
			cout << endl;
			if (end >= a.length() - 1)
				break;
			else
				start = end + 1;
		}
	}
	return 0;
}
