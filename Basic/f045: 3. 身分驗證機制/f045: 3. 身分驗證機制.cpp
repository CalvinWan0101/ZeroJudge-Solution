#include<iostream>
#include <string>
using namespace std;
int main()
{
	string a;
	int first = -1, second = -1;
	int k;
	int array[9];
	while (cin>>a)
	{
		for (int i = 0; i < 9; i++)
		{
			array[i]=a[i];
			array[i] -= 48;
			if (array[i] > first)
			{
				first = array[i];
				k = i;
			}
		}
		for (int i = 0; i < 9; i++)
			if (array[i] > second && k != i)
				second = array[i];
		if (first * first + second * second == array[6] * 100 + array[7] * 10 + array[8])
			cout << "Good Morning!" << endl;
		else if (first * first + second * second != array[6] * 100 + array[7] * 10 + array[8])
			cout << "SPY!" << endl;
	}
	return 0;
}
