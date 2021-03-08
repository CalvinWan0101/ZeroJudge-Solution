#include <iostream>
using namespace std;
int main(int argc, char** argv)
{
	int n;
	while (cin >> n)
	{
		int array[1000][2];
		for (int i = 0; i < n; i++)
			cin >> array[i][0] >> array[i][1];
		//選擇排序
		int buffer0, buffer1;
		//先排array[0]
		for (int i = 0; i < n; i++)
		{
			for (int j = i; j < n; j++)
			{
				if (array[i][0] > array[j][0])
				{
					buffer0 = array[i][0];
					buffer1 = array[i][1];
					array[i][0] = array[j][0];
					array[i][1] = array[j][1];
					array[j][0] = buffer0;
					array[j][1] = buffer1;
				}
			}
		}
		//再排array[1]
		for (int i = 0; i < n; i++)
		{
			for (int j = i; j < n; j++)
			{
				if (array[i][1] > array[j][1] && array[i][0] == array[j][0])
				{
					buffer0 = array[i][0];
					buffer1 = array[i][1];
					array[i][0] = array[j][0];
					array[i][1] = array[j][1];
					array[j][0] = buffer0;
					array[j][1] = buffer1;
				}
			}
		}
		for (int i = 0; i < n; i++)
			cout << array[i][0] << " " << array[i][1] << endl;
	}
	return 0;
}
