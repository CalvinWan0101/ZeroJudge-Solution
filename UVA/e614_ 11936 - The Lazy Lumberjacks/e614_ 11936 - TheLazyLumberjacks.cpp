#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, a, b, c;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a >> b >> c;
        if (a < b + c && b < a + c && c < a + b)
            cout << "OK" << endl;
        else
            cout << "Wrong!! " << endl;
    }
    return 0;
}
