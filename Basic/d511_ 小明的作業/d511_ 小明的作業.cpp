#include <iostream>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int a, b, c, count = 0;
    while (cin >> a >> b >> c)
        if (a < b + c && b < a + c && c < a + b)
            count++;
    cout << count << endl;
    return 0;
}
