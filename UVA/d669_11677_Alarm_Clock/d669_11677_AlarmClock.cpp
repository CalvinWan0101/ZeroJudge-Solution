#include <iostream>
using namespace std;
int main()
{
    int a, b, c, d;
    while (cin >> a >> b >> c >> d)
        if (a == 0 && b == 0 && c == 0 && d == 0)
            break;
        else
            cout << ((c * 60 + d) - (a * 60 + b) + 1440) % 1440 << endl;
    return 0;
}
