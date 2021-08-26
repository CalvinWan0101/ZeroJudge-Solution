#include<iostream>
using namespace std;
int main()
{
	int h1, h2, m1, m2, need, n, count;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		count = 0;
		cin >> h1 >> m1 >> h2 >> m2 >> need;
		if (h2 != h1)
			count += (h2 - h1 - 1) * 60;
		if (h1 == h2)
			count += m2 - m1;
		else
			count += m2 + (60 - m1);
		if (count >= need)
			cout << "Yes" << endl;
		else
			cout << "No" << endl;
	}
	return 0;
}
