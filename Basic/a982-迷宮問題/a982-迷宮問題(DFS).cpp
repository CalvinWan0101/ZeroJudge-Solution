#include <iostream>
using namespace std;
int length, m = 100000;
char map[101][101];
int bucket[101][101] = { 0 };
//起點固定(2,2),終點固定(length-1,length-1)
void dfs(int y, int x, int step)
{
	int bx, by;
	//右上左下
	int way[4][2] = { {0,1},{-1,0},{0,-1},{1,0} };
	if (x == length - 1 && y == length - 1)
	{
		if (step < m)
			m = step;
		return;
	}
	for (int i = 0; i < 4; i++)
	{
		bx = x + way[i][1];
		by = y + way[i][0];
		if (map[by][bx] == '#')
			continue;
		if (bucket[by][bx] == 0 && map[by][bx] == '.')
		{
			bucket[by][bx] = 1;
			dfs(by, bx, step + 1);
			bucket[by][bx] = 0;
		}
	}
}
int main()
{
	while (cin >> length)
	{
		for (int i = 1; i <= length; i++)
			for (int j = 1; j <= length; j++)
				cin >> map[i][j];
		bucket[2][2] = 1;
		dfs(2, 2, 1);
		if (m == 100000)
			cout << "No solution!" << '\n';
		else
			cout << m << '\n';
	}
	return 0;
}
