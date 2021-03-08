#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int a, max = -10000;
    while (cin >> a)
        if (a > max)
            max = a;
    cout << max << endl;
    return 0;
}
