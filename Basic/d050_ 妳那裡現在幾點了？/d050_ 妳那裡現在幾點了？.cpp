#include <iostream>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    while (cin >> n)
        cout << (n + 9) % 24 << endl;
    return 0;
}
