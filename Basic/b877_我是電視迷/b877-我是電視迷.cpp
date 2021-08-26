#include <iostream>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
	int a,b,c;
	cin>>a>>b;
	c = a>b? 100-a+b:b-a;
	cout<<c<<endl;
	return 0;
}
