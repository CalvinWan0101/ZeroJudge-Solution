#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    while (cin >> n && n != 0)
    {
        int count = 0;
        for (int i = n; i >= 1; i--)
            count += i * i;
        cout << count << endl;
    }
    return 0;
}
