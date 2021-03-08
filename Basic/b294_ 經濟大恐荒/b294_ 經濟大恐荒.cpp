#include <iostream>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, k;
    long long int count = 0;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> k;
        count += k * i;
    }
    cout << count << endl;
    return 0;
}
