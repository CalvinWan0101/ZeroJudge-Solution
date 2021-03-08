#include <iostream>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    while (cin >> n)
        if (n < 0)
            cout << "-1" << endl;
        else if (n > 0)
            cout << "1" << endl;
        else
            cout << "0" << endl;
    return 0;
}
