#include<iostream>
#include<string>
using namespace std;
int main()
{
	string a;
	int array[7];
	while (cin >> a)
	{
		for (int i = 1; i <= 6; i++)
		{
			array[i] = a[i - 1] - a[i];
			if (array[i] < 0)
				array[i] *= -1;
		}
		for (int i = 1; i <= 6; i++)
			cout << array[i];
		cout << '\n';
	}
}
