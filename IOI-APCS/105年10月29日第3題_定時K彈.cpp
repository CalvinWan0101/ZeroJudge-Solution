#include <iostream>
using namespace std;
int main()
{
	int y, x;
	int array[20];
	int buffer, max,count,know;
	while (cin >> y >> x)
	{
		know = 0;
		count = 0;
		for (int i = 1; i <= y; i++)
		{
			max = -1;
			for (int j = 0; j < x; j++)
			{
				cin >> buffer;
				if (max < buffer)
					max = buffer;
			}
			array[i] = max;
			count += max;
		}
		cout << count << endl;
		for (int i = 1; i <= y; i++)
			if (count % array[i] == 0)
			{
				cout << array[i] << " ";
				know = 1;
			}
			else if(know==0&&i==y)
				cout << "-1" << endl;
	}
	return 0;
}