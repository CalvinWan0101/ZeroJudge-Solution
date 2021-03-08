#include <iostream>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int bucket[4] = { 0 };
	int n, a;
	cin >> a;
	while (cin >> n)
		bucket[n]++;
	for (int i = 1; i <= 3; i++)
	{
		for (int j = 1; j <= bucket[i]; j++)
			cout << i << " ";
	}
}
