#include <iostream>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, k, max = -1;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> k;
        if (k > max)
            max = k;
    }
    cout << max << endl;
    return 0;
}
