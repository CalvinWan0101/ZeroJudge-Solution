#include <iostream>
using namespace std;
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	unsigned long long int array[50];
	array[1] = 1;
	array[2] = 3;
	for (int i = 3; i < 50; i++)
		array[i] = array[i - 1] + array[i - 2];
	int n;
	while (cin >> n)
		cout << array[n] << endl;
	return 0;
}
