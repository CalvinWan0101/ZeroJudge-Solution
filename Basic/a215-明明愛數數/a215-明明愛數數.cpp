#include<iostream>
using namespace std;
int main()
{
	int min, max;
	while (cin >> min >> max)
	{
		int count = 0;
		int buffer = min;
		int sum = 0;
		while (true)
		{
			sum += buffer;
			count++;
			buffer++;
			if (sum > max)
			{
				cout << count << endl;
				break;
			}
		}
	}
	return 0;
}
