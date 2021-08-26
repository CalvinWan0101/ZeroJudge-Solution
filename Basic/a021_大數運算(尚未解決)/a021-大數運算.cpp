#include <iostream>
#include <cstdlib>
#include <sstream>
#include <algorithm>
using namespace std;
//比較兩個大數的大小
int compare(int a[500], int b[1000])
{
	//輸入compare函數的兩個陣列同樣使用顛倒後的陣列方便計算
	int counta = 0, countb = 0;
	for (int i = 0; i < 500; i++)
		if (a[i] > 0)
			counta++;
	for (int i = 0; i < 500; i++)
		if (b[i] > 0)
			countb++;
	//篩選第一關比位數
	if (counta > countb)
		return 1;
	else if (counta < countb)
		return 2;
	else if (counta == countb)
		return 3;
	//如果位數一樣則開始比較每一位數的大小
	else
		for (int i = 0; i < counta; i++)
			if (a[counta - 1 - i] > b[counta - 1 - i])
			{
				return 1;
				break;
			}
			else
			{
				return 2;
				break;
			}
}
int main(int argc, char** argv)
{
	
	//輸入的原始資料
	string a, b;
	//運算符
	string c;
	int A[500] = { 0 };
	int B[500] = { 0 };
	int last[1000] = { 0 };

	cout << "請輸入計算式" << endl;;
	cin >> a >> c >> b;
	//轉換string陣列為int陣列
	int Z = max(a.length(), b.length());
	int Y = a.length() + b.length();
	cout << "結果：";
	for (int i = 0; i < a.length(); i++)
	{
		stringstream transferA;
		transferA << a[i];
		transferA >> A[i];
		cout << A[i];
	}
	cout << c;
	for (int i = 0; i < b.length(); i++)
	{
		stringstream transferB;
		transferB << b[i];
		transferB >> B[i];
		cout << B[i];
	}
	cout << "=";
	//顛倒陣列A
	int tranA[500] = { 0 };
	for (int i = 0; i < a.length(); i++)
		tranA[i] = A[a.length() - 1 - i];
	//顛倒陣列B
	int tranB[500] = { 0 };
	for (int i = 0; i < b.length(); i++)
		tranB[i] = B[b.length() - 1 - i];
	//加法計算
	if (c == "+")
	{
		int carry = 0;
		for (int i = 0; i <= Z; i++)
		{
			last[i] = tranA[i] + tranB[i] + carry;
			carry = (tranA[i] + tranB[i] + carry) / 10;
			last[i] = last[i] % 10;
		}
		//最高位沒有進位	
		if (last[Z] == 0)
			for (int i = 0; i < Z; i++)
				cout << last[Z - 1 - i];
		//有進位
		else
			for (int i = 0; i <= Z; i++)
				cout << last[Z - i];
	}
	//減法計算
	else if (c == "-")
	{
		int i = 0, borrow = 0;
		for (; i < Z; i++)
		{
			last[i] = tranA[i] - tranB[i] - borrow;
			//減完之後發現小於0 =》往後借1
			if (last[i] < 0)
			{
				borrow = 1;
				last[i] += 10;
			}
			else
				borrow = 0;
		}
		//最高位退位
		if (last[Z - 1] == 0)
			for (int i = 0; i < Z - 1; i++)
				cout << last[Z - 2 - i];
		//最高位不退位
		else
			for (int i = 0; i < Z; i++)
				cout << last[Z - 1 - i];
	}
	//乘法計算
	else if (c == "*")
	{
		int carry = 0;
		for (int i = 0; i <= b.length(); i++)
		{
			//當a=0時跳過敘述進入迴圈下一步
			if (a[i] == 0)
				continue;
			for (int j = 0; j < a.length(); j++)
				last[i + j] += tranA[j] * tranB[i];
		}
		//沒有進位
		if (last[Y] == 0)
			for (int i = 0; i < Y - 1; i++)
			{
				last[i] += carry;
				carry = last[i] / 10;
				last[i] %= 10;
			}
		//有進位
		else
			for (int i = 0; i < Y; i++)
			{
				last[i] += carry;
				carry = last[i] / 10;
				last[i] %= 10;
			}
		//印出
	//沒有進位
		if (last[Y] == 0)
			for (int i = 0; i < Y - 1; i++)
				cout << last[Y - 2 - i];
		//有進位
		else
			for (int i = 0; i < Y; ++i)
				cout << last[Y - 1 - i];
	}
	//除法計算
	else if (c == "/")
	{
		int result[500];
		//endless cycle加法一直加直到結果大於被除數
		int sum = 0;
		int carry = 0;
		int orgin = b.length();
		int change = b.length();
		while (true)
		{
			change = sizeof(last) / sizeof(last[0]);
			carry = 0;
			for (int i = 0; i <= (orgin + change); i++)
			{
				last[i] = last[i] + tranB[i] + carry;
				carry = (tranB[i] + last[i] + carry) / 10;
				last[i] = last[i] % 10;
			}
			sum++;
			if (compare(last, tranA) == 1)
			{
				cout << sum - 1 << endl;
				break;
			}
			else if (compare(last, tranA) == 1)
			{
				cout << sum << endl;
				break;
			}
		}
	}
	system("PAUSE");
	return 0;
}
