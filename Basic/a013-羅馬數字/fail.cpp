#include <iostream>
using namespace std;
int transfer(string input)
{
	char c, d;
	int count = 0;
	for (int i = 0; i < input.length(); i++)
	{
		c = input[i];
		d = input[i + 1];
		switch (c)
		{
		case 'I':
			if (d == 'V')
			{
				count += 4;
				i++;
			}
			else if (d == 'X')
			{
				count += 9;
				i++;
			}
			else
				count++;
			break;
		case 'X':
			if (d == 'L')
			{
				count += 40;
				i++;
			}
			else if (d == 'C')
			{
				count += 90;
				i++;
			}
			else
				count += 10;
			break;
		case 'C':
			if (d == 'D')
			{
				count += 400;
				i++;
			}
			else if (d == 'M')
			{
				count += 900;
				i++;
			}
			else
				count += 100;
			break;
		case 'V':
			count += 5;
			break;
		case 'L':
			count += 50;
			break;
		case 'D':
			count += 500;
			break;
		case 'M':
			count += 1000;
			break;
		}
	}
	return count;
}
int main()
{
	string a, b, last;
	int counta, countb, sum;
	while (cin >> a >> b)
	{
		if (a == "#")
			break;
		counta = transfer(a);
		countb = transfer(b);
		sum = abs(counta - countb);
		string rom[13] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
		int romnum[13] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
		if (sum == 0)
			cout << "ZERO" << endl;
		else
			for (int i = 0; i < 13; i++)
			{
				if (sum < romnum[i])
					continue;
				while (sum >= romnum[i])
				{
					sum -= romnum[i];
					last += rom[i];
				}
			}
		cout << last << endl;
	}
	return 0;
}
