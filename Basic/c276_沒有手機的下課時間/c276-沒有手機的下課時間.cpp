#include <iostream>
using namespace std;
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	int right[5], input[5];
	int n, buffer;
	//input transport
	cin >> buffer;
	right[4] = (buffer / 1000) % 10;
	right[3] = (buffer / 100) % 10;
	right[2] = (buffer / 10) % 10;
	right[1] = (buffer % 10);
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cin >> buffer;
		input[4] = (buffer / 1000) % 10;
		input[3] = (buffer / 100) % 10;
		input[2] = (buffer / 10) % 10;
		input[1] = (buffer % 10);
		int a = 0, b = 0;
		for (int k = 1; k <= 4; k++)
			for (int u = 1; u <= 4; u++)
			{
				if (right[k] == input[u])
				{
					if (k == u)
						a++;
					else
						b++;
				}
			}
		cout << a << "A" << b << "B" << endl;
	}
	return 0;
}
