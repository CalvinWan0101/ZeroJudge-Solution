#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	unsigned long long int a, b, c, buffer1, buffer2;
	while (cin >> a >> b >> c)
	{
		buffer1 = a / 10;
		buffer2 = c / 2;
		cout << a << " 個餅乾，" << b+min(buffer1,buffer2) << " 盒巧克力，" << c << " 個蛋糕。" << '\n';
	}
}
