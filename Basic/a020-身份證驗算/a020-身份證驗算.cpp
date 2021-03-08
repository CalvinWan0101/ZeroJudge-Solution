#include <iostream>
#include<string>
#include <sstream>
//一個用來轉換開頭英文字母的小小函數
int tran(char z[])
{
	int back;
	switch (z[0])
	{
	case 'A':
		back = 10;
		break;
	case'B':
		back = 11;
		break;
	case 'C':
		back = 12;
		break;
	case 'D':
		back = 13;
		break;
	case 'E':
		back = 14;
		break;
	case 'F':
		back = 15;
		break;
	case 'G':
		back = 16;
		break;
	case 'H':
		back = 17;
		break;
	case 'I':
		back = 34;
		break;
	case 'J':
		back = 18;
		break;
	case 'K':
		back = 19;
		break;
	case 'L':
		back = 20;
		break;
	case 'M':
		back = 21;
		break;
	case 'N':
		back = 22;
		break;
	case 'O':
		back = 35;
		break;
	case 'P':
		back = 23;
		break;
	case 'Q':
		back = 24;
		break;
	case 'R':
		back = 25;
		break;
	case 'S':
		back = 26;
		break;
	case 'T':
		back = 27;
		break;
	case 'U':
		back = 28;
		break;
	case 'V':
		back = 29;
		break;
	case 'W':
		back = 32;
		break;
	case 'X':
		back = 30;
		break;
	case 'Y':
		back = 31;
		break;
	case 'Z':
		back = 33;
		break;
	}
	return (back / 10) + (back % 10) * 9;
}
using namespace std;
int main()
{
	char orgin[11];
	cin >> orgin;
	//創建整數陣列容納後面9個數字
	int intarry[9];
	for (int i = 0; i < 9; i++)
	{
		stringstream transferA;
		transferA << orgin[i + 1];
		transferA >> intarry[i];
	}
	//召喚字母計算函數！！！
	int sum = tran(orgin) + intarry[0] * 8 + intarry[1] * 7 + intarry[2] * 6 + intarry[3] * 5 + intarry[4] * 4 + intarry[5] * 3 + intarry[6] * 2 + intarry[7] * 1 + intarry[8] * 1;
	if (sum % 10 == 0)
		cout << "real" << endl;
	else
		cout << "fake" << endl;
}
