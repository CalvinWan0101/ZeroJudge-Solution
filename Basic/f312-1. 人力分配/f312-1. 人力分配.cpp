#include<iostream>
#include<algorithm>
using namespace std;
int main() {
	int A1, B1, C1;
	int A2, B2, C2;
	cin >> A1 >> B1 >> C1 >> A2 >> B2 >> C2;
	int n;
	cin >> n;
	int ans = -1000000;
	for (int i = 0; i <= n; i++)
		for (int j = 0; j <= n; j++)
			if (i + j == n)
				ans = max(ans, A1 * i * i + B1 * i + C1 + A2 * j * j + B2 * j + C2);
	cout << ans;
}
