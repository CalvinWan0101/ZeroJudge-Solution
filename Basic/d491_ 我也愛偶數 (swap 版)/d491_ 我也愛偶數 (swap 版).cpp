#include <iostream>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int a, b, buffer;
    while (cin >> a >> b)
    {
        if (a > b)
        {
            buffer = a;
            a = b;
            b = buffer;
        }

        if (a % 2 == 1)
            a++;
        if (b % 2 == 1)
            b--;
        cout << (a + b) * ((b - a) / 2 + 1) / 2 << endl;
    }
    return 0;
}
