#include <iostream>
#include<string>
using namespace std;
int main()
{
	//解題思路
	//羅馬數字一組字母代表一位數字
	//一組又有分如【V】一個字母為一組以及如【IV】兩個字母為一組
	//先設立可以兩個字母為一組的開頭字母如【I】【X】【C】
	//再判斷只能單獨一個為一組的如【V】【L】【D】【M】
	string a, b;
	while (cin >> a)
	{
		if (a[0] == '#' && a.length() == 1)
			break;
		cin >> b;
		//轉換a為數字
		int suma = 0;
		string buffer[2];
		//轉換string a為數字
		for (int i = 0; i < a.length(); i++)
		{
			buffer[0] = a[i];
			buffer[1] = a[i + 1];

			//I開頭，包含【I】【IV】【IX】
			if (buffer[0].compare("I") == 0)
			{
				if (buffer[1].compare("V") == 0)
				{
					suma += 4;
					i++;
				}
				else if (buffer[1].compare("X") == 0)
				{
					suma += 9;
					i++;
				}
				else
					suma += 1;
			}
			//X開頭，包含【X】【XL】【XC】
			if (buffer[0].compare("X") == 0)
			{
				if (buffer[1].compare("L") == 0)
				{
					suma += 40;
					i++;
				}
				else if (buffer[1].compare("C") == 0)
				{
					suma += 90;
					i++;
				}
				else
					suma += 10;
			}
			//C開頭，包含【C】【CD】【CM】
			if (buffer[0].compare("C") == 0)
			{
				if (buffer[1].compare("D") == 0)
				{
					suma += 400;
					i++;
				}
				else if (buffer[1].compare("M") == 0)
				{
					suma += 900;
					i++;
				}
				else
					suma += 100;
			}
			//單獨V
			if (buffer[0].compare("V") == 0)
				suma += 5;
			//單獨L
			if (buffer[0].compare("L") == 0)
				suma += 50;
			//單獨D
			if (buffer[0].compare("D") == 0)
				suma += 500;
			//單獨M
			if (buffer[0].compare("M") == 0)
				suma += 1000;
		}
		//轉換string b為數字
		int sumb = 0;
		for (int i = 0; i < b.length(); i++)
		{
			buffer[0] = b[i];
			buffer[1] = b[i + 1];

			//I開頭，包含【I】【IV】【IX】
			if (buffer[0].compare("I") == 0)
			{
				if (buffer[1].compare("V") == 0)
				{
					sumb += 4;
					i++;
				}
				else if (buffer[1].compare("X") == 0)
				{
					sumb += 9;
					i++;
				}
				else
					sumb += 1;
			}
			//X開頭，包含【X】【XL】【XC】
			if (buffer[0].compare("X") == 0)
			{
				if (buffer[1].compare("L") == 0)
				{
					sumb += 40;
					i++;
				}
				else if (buffer[1].compare("C") == 0)
				{
					sumb += 90;
					i++;
				}
				else
					sumb += 10;
			}
			//C開頭，包含【C】【CD】【CM】
			if (buffer[0].compare("C") == 0)
			{
				if (buffer[1].compare("D") == 0)
				{
					sumb += 400;
					i++;
				}
				else if (buffer[1].compare("M") == 0)
				{
					sumb += 900;
					i++;
				}
				else
					sumb += 100;
			}
			//單獨V
			if (buffer[0].compare("V") == 0)
				sumb += 5;
			//單獨L
			if (buffer[0].compare("L") == 0)
				sumb += 50;
			//單獨D
			if (buffer[0].compare("D") == 0)
				sumb += 500;
			//單獨M
			if (buffer[0].compare("M") == 0)
				sumb += 1000;
		}
		int sum = suma - sumb;
		if (sum < 0)
			sum *= -1;
		//將sum以羅馬數字的型態輸出

		//轉換思路
		//將所有羅馬數字的組合列出
		//將欲轉換的數字從大減到小再存回
		//同時增加所減掉數字所對應的羅馬數字
		//直到結果為0
		string rom[13] = { "M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I" };
		int romnum[13] = { 1000,900,500,400,100,90,50,40,10,9,5,4,1 };
		string print = "";
		if (sum == 0)
			cout << "ZERO" << endl;
		else {
			for (int i = 0; i < 13; i++)
			{
				if (sum < romnum[i])
					continue;
				while (sum >= romnum[i])
				{
					sum -= romnum[i];
					print += rom[i];
				}
			}
			cout << print << endl;
		}
	}
	return 0;
}
