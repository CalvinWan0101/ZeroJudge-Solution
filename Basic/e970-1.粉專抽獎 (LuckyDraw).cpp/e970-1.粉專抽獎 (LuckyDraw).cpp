#include <iostream>
using namespace std;
int main()
{
	int n;
	int array[10001];
	int count;
	while (cin >> n)
	{
		count = 0;
		for (int i = 1; i <= n; i++)
			cin >> array[i];
		for (int i = 1; i <=n; i++)
			if (i % array[n] == 1)
				count += array[i];
		if (count % n != 0)
			cout << count % n << " " << array[count % n] << endl;
		else
			cout << n << " " << array[n] << endl;
	}
	return 0;
}
