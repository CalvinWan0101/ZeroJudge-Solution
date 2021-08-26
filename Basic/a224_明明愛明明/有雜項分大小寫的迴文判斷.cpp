#include<iostream>
#include<string>
using namespace std;
int main()
{
	string a;
	while (getline(cin, a))
	{
		int start = 0, end = a.length() - 1;
		while (true)
		{
			if (a[start] != a[end])
			{
				cout << "no..." << endl;
				break;
			}
			else if (start == end || end - 1 == start && a[start] == a[end])
			{
				cout << "yes !" << endl;
				break;
			}
			for (start = start + 1; start < a.length(); start++)
				if (a[start] >= 65 && a[start] <= 90 || a[start] >= 97 && a[start] <= 122)
				{
					if (a[start] >= 97 && a[start] <= 122)
						a[start] -= 32;
					break;
				}
			for (end = end - 1; end >= 0; end--)
				if (a[end] >= 65 && a[end] <= 90 || a[end] >= 97 && a[end] <= 122)
				{
					if (a[end] >= 97 && a[end] <= 122)
						a[end] -= 32;
					break;
				}
		}
	}
	return 0;
}
