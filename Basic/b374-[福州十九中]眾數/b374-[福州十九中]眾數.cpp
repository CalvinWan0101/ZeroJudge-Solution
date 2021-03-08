#include <iostream>
using namespace std;
int main()
{
	int n;
	while (cin >> n)
	{
		int array[10000];
		for (int i = 0; i < n; i++)
			cin >> array[i];
		int bucket[30001] = { 0 };
		for (int i = 0; i < n; i++)
			bucket[array[i]]++;
		int large = 0;
		for (int i = 0; i < 30001; i++)
			if (bucket[i] > large)
				large = bucket[i];
		for (int i = 0; i < 30001; i++)
			if (bucket[i] == large)
				cout << i << " " << bucket[i] << endl;
	}
	return 0;
}
