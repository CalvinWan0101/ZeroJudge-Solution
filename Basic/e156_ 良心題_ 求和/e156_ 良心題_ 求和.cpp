#include <iostream>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    while (cin >> n)
        cout << (1 + n) * n / 2 << endl;
    return 0;
}
