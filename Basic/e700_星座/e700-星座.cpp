#include <iostream>
#include <string>
using namespace std;
int main()
{
	string a;
	int array[5] = { 0 };
	int m, d;
	while (cin >> a)
	{
		for (int i = 0; i < a.length(); i++)
		{
			array[i] = a[i];
			array[i] -= 48;
		}
		//單單
		if (a.length() == 3)
		{
			m = array[0];
			d = array[2];
		}
		//雙單
		else if (a.length() == 4 && array[2] == -1)
		{
			m = array[0] * 10 + array[1];
			d = array[3];
		}
		//單雙
		else if (a.length() == 4 && array[1] == -1)
		{
			m = array[0];
			d = array[2] * 10 + array[3];
		}
		//雙雙
		else if (a.length() == 5)
		{
			m = array[0] * 10 + array[1];
			d = array[3] * 10 + array[4];
		}
		switch (m)
		{
		case 1:
			if (d >= 21)
				cout << "水瓶座" << endl;
			else
				cout << "摩羯座" << endl;
			break;
		case 2:
			if (d >= 20)
				cout << "雙魚座" << endl;
			else
				cout << "水瓶座" << endl;
			break;
		case 3:
			if (d >= 21)
				cout << "牡羊座" << endl;
			else
				cout << "雙魚座" << endl;
			break;
		case 4:
			if (d >= 21)
				cout << "金牛座" << endl;
			else
				cout << "牡羊座" << endl;
			break;
		case 5:
			if (d >= 22)
				cout << "雙子座" << endl;
			else
				cout << "金牛座" << endl;
			break;
		case 6:
			if (d >= 22)
				cout << "巨蟹座" << endl;
			else
				cout << "雙子座" << endl;
			break;
		case 7:
			if (d >= 23)
				cout << "獅子座" << endl;
			else
				cout << "巨蟹座" << endl;
			break;
		case 8:
			if (d >= 22)
				cout << "處女座" << endl;
			else
				cout << "獅子座" << endl;
			break;
		case 9:
			if (d >= 24)
				cout << "天秤座" << endl;
			else
				cout << "處女座" << endl;
			break;
		case 10:
			if (d >= 24)
				cout << "天蠍座" << endl;
			else
				cout << "天秤座" << endl;
			break;
		case 11:
			if (d >= 23)
				cout << "射手座" << endl;
			else
				cout << "天蠍座" << endl;
			break;
		case 12:
			if (d >= 23)
				cout << "摩羯座" << endl;
			else
				cout << "射手座" << endl;
		}
	}
	return 0;
}
