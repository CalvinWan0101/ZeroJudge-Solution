#include<iostream>
using namespace std;
int main()
{
	int n, in, count = 0;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> in;
		if (in <= 10)
			count++;
	}
	cout << count << "\n";
}
