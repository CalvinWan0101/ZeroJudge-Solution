#include <iostream>
using namespace std;
int main()
{
	int n;
	int bucket[21] = { 0 };
	int buffer;
	while (cin >> n)
	{
		for (int i = 1; i <= n; i++)
			bucket[i] = 1;
		while (cin >> buffer)
			bucket[buffer] = 0;
		for (int i = n; i >= 1; i--)
			if (bucket[i] == 1)
				cout << "No. " << i << endl;
		for (int i = 0; i < 21; i++)
			bucket[i] = 0;
	}
}
