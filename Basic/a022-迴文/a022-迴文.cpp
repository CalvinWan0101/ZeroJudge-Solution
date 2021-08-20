#include<iostream>
#include<string>
using namespace std;
int main()
{
	string a;
	while (cin >> a)
	{
		if (a.length() == 1)
		{
			cout << "yes" << endl;
			continue;
		}
		int know = 0;
		for(int i=0;i<=a.length()-1;i++)
			if (a[i] != a[a.length() - 1 - i])
			{
				know = 1;
				break;
			}
		if (know == 0)
			cout << "yes" << endl;
		else
			cout << "no" << endl;
	}
	return 0;
}
// test