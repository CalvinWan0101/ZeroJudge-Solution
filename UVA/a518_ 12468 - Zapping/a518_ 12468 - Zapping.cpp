#include <iostream>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int a, b, buffer;
    while (cin >> a >> b)
    {
        if (a == -1 && b == -1)
            break;
        if (b < a)
        {
            buffer = a;
            a = b;
            b = buffer;
        }
        if (b - a > 50)
            cout << (100 + a - b) << endl;
        else
            cout << b - a << endl;
    }
    return 0;
}
