#include <iostream>
using namespace std;
int main()
{
	int A1, A2, B1, B2, C1, C2;
	while (cin >> A1 >> A2 >> B1 >> B2 >> C1 >> C2)
		for (int i = 1; i <= 10000000; i++)
			if ((i - A2) % A1 == 0 && (i - B2) % B1 == 0 && (i - C2) % C1 == 0)
			{
				cout << i << endl;
				break;
			}
	return 0;
}
