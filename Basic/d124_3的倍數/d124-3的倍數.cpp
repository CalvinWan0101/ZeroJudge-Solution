#include <iostream>
#include<string>
using namespace std;
int main()
{
	string a;
	int array[10000] = { 0 };
	int sum;
	while (cin >> a)
	{
		sum = 0;
		for (int i = 0; i < a.length(); i++)
		{
			array[i] = a[i];
			array[i] -= 48;
		}
		//此時【-】的值為-3
		//正數
		if (array[0] != -3)
		{
			for (int i = 0; i < a.length(); i++)
			{
				sum += array[i];
				sum %= 3;
				if (i == a.length() - 1 && sum != 0)
					cout << "no" << endl;
				else if (i == a.length() - 1 && sum == 0)
					cout << "yes" << endl;
			}
		}
		//負數
		else
		{
			for (int i = 1; i < a.length(); i++)
			{
				sum += array[i];
				sum %= 3;
				if (i == a.length() - 1 && sum != 0)
					cout << "no" << endl;
				else if (i == a.length() - 1 && sum == 0)
					cout << "yes" << endl;
			}
		}
	}
}
