#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    long long int a, b;
    while (cin >> a >> b)
        cout << abs(a - b) << endl;
    return 0;
}
