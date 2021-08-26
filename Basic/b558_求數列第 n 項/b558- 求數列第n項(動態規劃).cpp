#include <iostream>
using namespace std;
int main()
{
	int array[501];
	array[1] = 1;
	for (int i = 2; i <= 500; i++)
		array[i] = array[i - 1] + i - 1;
	int n;
	while (cin >> n)
		cout << array[n] << '\n';
}
