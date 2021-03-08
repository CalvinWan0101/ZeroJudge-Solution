#include <iostream>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int array[100], n;
    while (cin >> n)
    {
        int m = 0;
        while (n > 0)
        {
            array[m] = n % 2;
            m++;
            n /= 2;
        }
        for (int i = m - 1; i >= 0; i--)
        {
            cout << array[i];
        }
        cout << endl;
    }
    return 0;
}
