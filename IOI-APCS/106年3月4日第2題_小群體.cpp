#include <iostream>
using namespace std;
int main()
{
	int array[50000];
	int bucket[50000] = { 0 };
	int n;
	int count, buffer;
	int a;
	while (cin >> n)
	{
		count = 0;
		for (int i = 0; i < n; i++)
			cin >> array[i];
		for (int i = 0; i < n; i++)
		{
			if (bucket[i] == 0)
			{
				//邊緣人(朋友只有自己)
				if (array[i] == i)
				{
					count++;
					bucket[i] = 1;
				}
				//小群體
				else
				{
					count++;
					buffer = i;
					a = i;
					bucket[buffer] = 1;
					while (true)
					{
						buffer = array[buffer];
						bucket[buffer] = 1;
						if (buffer == a)
							break;
					}
				}
			}
		}
		//重置出現記錄
		for (int i = 0; i < n; i++)
			bucket[i] = 0;
		cout << count << endl;
	}
	return 0;
}