#include <iostream>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
   int array[10001];
	array[0] = 1;
	array[1] = 1;
	for (int i = 2; i < 10000; i++)
		array[i] = (array[i - 1] + array[i - 2]) % 1000000007;
	int n;
	while (cin >> n)
		cout << array[n] << endl;
	return 0;
}
