#include <iostream>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    while (cin >> n)
        cout << ((n <= 25) ? 25 - n : 85 - n) << endl;
    return 0;
}
