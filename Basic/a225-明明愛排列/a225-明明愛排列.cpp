#include <iostream>
using namespace std;
int main()
{
	int number;
	int array[1000] = { 0 };
	while (cin >> number)
	{
		for (int i = 0; i < number; i++)
			cin >> array[i];
		//先依照個位的大小排序
		int buffer;
		for (int i = 0; i < number - 1; i++)
			for (int j = i + 1; j < number; j++)
				if (array[i] % 10 > array[j] % 10)
				{
					buffer = array[i];
					array[i] = array[j];
					array[j] = buffer;
				}
		int start = 0;
		int end;
		while (true)
		{
			for (end = start; end < number; end++)
				if (array[end] % 10 != array[start] % 10)
					break;
			for (int j = start; j < end - 1; j++)
				for (int k = j + 1; k < end; k++)
					if (array[j] < array[k])
					{
						buffer = array[j];
						array[j] = array[k];
						array[k] = buffer;
					}
			//重置start
			start = end;
			if (start == number)
				break;
		}
		for (int i = 0; i < number; i++)
			cout << array[i] << " ";
		cout << endl;
	}
	return 0;
}
