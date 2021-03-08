#include <iostream>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    long long int n, array[1000000];
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> array[i];
    for (int i = n; i >= 1; i--)
        cout << array[i] << " ";
    return 0;
}
