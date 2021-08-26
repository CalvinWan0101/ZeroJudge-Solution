#include <iostream>
#include<string>
using namespace std;
int main()
{
	string animals[12] = { "鼠","牛","虎","兔","龍","蛇","馬","羊","猴","雞","狗","豬" };
	int n;
	while (cin >> n)
		if (n < 0)
			cout << animals[(n + 120) % 12] << '\n';
		else
			cout << animals[(n + 119) % 12] << '\n';
}
