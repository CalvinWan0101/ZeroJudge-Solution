#include <iostream>
using namespace std;
int main()
{
	int n;
	int m;
	int array[50][50] = { 0 };
	int x, y;
	int count;
	//n為原始陣列邊長
	//m為起始方向0123左上右下
	while (cin >> n >> m)
	{
		count = 1;
		for (int i = 1; i <= n; i++)
			for (int j = 1; j <= n; j++)
				cin >> array[i][j];
		y = n / 2 + 1;
		x = n / 2 + 1;
		cout << array[y][x];
		switch (m)
		{
			//左上右下
		case 0:
			for (int i = 1;; i += 2)
			{
				//左x--
				for (int j = 1; j <= i; j++)
				{
					if (count == n * n)
						break;
					count++;
					x--;
					cout << array[y][x];
				}
				if (count == n * n)
					break;
				//上y--
				for (int j = 1; j <= i; j++)
				{
					if (count == n * n)
						break;
					count++;
					y--;
					cout << array[y][x];
				}
				if (count == n * n)
					break;
				//右x++
				for (int j = 1; j <= i + 1; j++)
				{
					if (count == n * n)
						break;
					count++;
					x++;
					cout << array[y][x];
				}
				if (count == n * n)
					break;
				//下y++
				for (int j = 1; j <= i + 1; j++)
				{
					if (count == n * n)
						break;
					count++;
					y++;
					cout << array[y][x];
				}
				if (count == n * n)
					break;
			}
			break;
			//上右下左
		case 1:
			for (int i = 1;; i += 2)
			{
				//上y--
				for (int j = 1; j <= i; j++)
				{
					if (count == n * n)
						break;
					count++;
					y--;
					cout << array[y][x];
				}
				if (count == n * n)
					break;
				//右x++
				for (int j = 1; j <= i; j++)
				{
					if (count == n * n)
						break;
					count++;
					x++;
					cout << array[y][x];
				}
				if (count == n * n)
					break;
				//下y++
				for (int j = 1; j <= i + 1; j++)
				{
					if (count == n * n)
						break;
					count++;
					y++;
					cout << array[y][x];
				}
				if (count == n * n)
					break;
				//左x--
				for (int j = 1; j <= i + 1; j++)
				{
					if (count == n * n)
						break;
					count++;
					x--;
					cout << array[y][x];
				}
				if (count == n * n)
					break;
			}
			break;
			//右下左上
		case 2:
			for (int i = 1;; i += 2)
			{
				//右x++
				for (int j = 1; j <= i; j++)
				{
					if (count == n * n)
						break;
					count++;
					x++;
					cout << array[y][x];
				}
				if (count == n * n)
					break;
				//下y++
				for (int j = 1; j <= i; j++)
				{
					if (count == n * n)
						break;
					count++;
					y++;
					cout << array[y][x];
				}
				if (count == n * n)
					break;
				//左x--
				for (int j = 1; j <= i + 1; j++)
				{
					if (count == n * n)
						break;
					count++;
					x--;
					cout << array[y][x];
				}
				if (count == n * n)
					break;
				//上y--
				for (int j = 1; j <= i + 1; j++)
				{
					if (count == n * n)
						break;
					count++;
					y--;
					cout << array[y][x];
				}
				if (count == n * n)
					break;
			}
			break;
		case 3:
			//下左上右
			for (int i = 1;; i += 2)
			{
				//下y++
				for (int j = 1; j <= i; j++)
				{
					if (count == n * n)
						break;
					count++;
					y++;
					cout << array[y][x];
				}
				if (count == n * n)
					break;
				//左x--
				for (int j = 1; j <= i; j++)
				{
					if (count == n * n)
						break;
					count++;
					x--;
					cout << array[y][x];
				}
				if (count == n * n)
					break;
				//上y--
				for (int j = 1; j <= i + 1; j++)
				{
					if (count == n * n)
						break;
					count++;
					y--;
					cout << array[y][x];
				}
				if (count == n * n)
					break;
				//右x++
				for (int j = 1; j <= i + 1; j++)
				{
					if (count == n * n)
						break;
					count++;
					x++;
					cout << array[y][x];
				}
				if (count == n * n)
					break;
			}
			break;
		}
	}
	return 0;
}