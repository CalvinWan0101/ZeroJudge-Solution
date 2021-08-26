#include <iostream>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int a, b;
    while (cin >> a >> b)
        cout << ((a % 2 == 1 && b % 2 == 1) ? (b - a) / 2 : (b - a) / 2 + 1) << endl;
    return 0;
}
