#include <iostream>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int a, b, count = 0;
    cin >> a >> b;
    for (int i = a; i <= b; i++)
        if (i % 2 == 0)
            count += i;
    cout << count << endl;
    return 0;
}
