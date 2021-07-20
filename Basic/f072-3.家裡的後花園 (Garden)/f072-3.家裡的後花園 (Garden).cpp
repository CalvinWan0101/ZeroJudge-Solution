#include <iostream>
using namespace std;
int main(int argc, char** argv)
{
	int n;
	int array[25];
	int left, right, l, r,count;
	while (cin >> n)
	{
		count = 0;
		for (int i = 0; i < n; i++)
			cin >> array[i];
		for (int i = 1; i < n - 1; i++)
		{
			left = right = l = r = 0;
			for (int j = i - 1; j >= 0; j--)
				if (array[j] == 1)
				{
					left = j;
					break;
				}
			for (int j = i - 1; j >= 0; j--)
				if (array[j] == 9)
				{
					l = j;
					break;
				}
			for (int j = i + 1; j < n; j++)
				if (array[j] == 1)
				{
					right = j;
					break;
				}
			for (int j = i + 1; j < n; j++)
				if (array[j] == 9)
				{
					r = j;
					break;
				}
			//左右都有圍欄
			if (left != 0 && right != 0)
			{
				//有蟲且在圍欄內
				if (r<right && r != 0 || left>l && l != 0)\
					continue;
				else
					count++;
			}
		}
		cout << count << endl;
	}
	system("PAUSE");
	return 0;
}
