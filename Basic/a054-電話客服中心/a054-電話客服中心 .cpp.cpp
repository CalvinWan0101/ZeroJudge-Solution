#include<iostream>
using namespace std;
int main()
{
	int a[26] = { 1,0,9,8,7,6,5,4,9,3,2,2,1,0,8,9,8,7,6,5,4,3,1,3,2,0 };
	string c;
	while (cin >> c)
	{
		int d[9], num;
		for (int i = 0; i < 9; i++)
			d[i] = c[i] - 48;
		num = d[0] * 8 + d[1] * 7 + d[2] * 6 + d[3] * 5 + d[4] * 4 + d[5] * 3 + d[6] * 2 + d[7] + d[8];
		num = (10 - num % 10) % 10;
		for (int i = 0; i < 26; i++)
			if (a[i] == num)
				cout << char(i + 65);
		cout << '\n';
	}
}
