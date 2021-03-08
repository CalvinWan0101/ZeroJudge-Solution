#include <iostream>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int a;
    while (cin >> a)
        cout << a - (a > 50) << endl;
    return 0;
}
