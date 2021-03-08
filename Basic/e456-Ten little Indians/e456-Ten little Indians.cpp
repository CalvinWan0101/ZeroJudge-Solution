#include <iostream>
#include<string>
using namespace std;
int main()
{
	string a;
	int start, end, len;
	while (getline(cin, a))
	{
		start = 0;
		len = a.length();
		while (true)
		{
			for (end = start; end < len; end++)
				if (a[end] == ' ')
					break;
			for (int i = start; i < end; i++)
				cout << a[i];
			if (end != len)
				cout << " little, ";
			else
				cout << " little Indians" << endl;
			if (end == len)
				break;
			else
				for (start = end; start < len; start++)
					if (a[start] != ' ')
						break;
		}
	}
	return 0;
}
