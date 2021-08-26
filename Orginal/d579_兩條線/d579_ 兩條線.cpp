#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    double n, k;
    while (cin >> n)
    {
        k = fabs(n);
        cout << fixed << setprecision(4) << "|" << n << "|=" << k << endl;
    }
    return 0;
}
