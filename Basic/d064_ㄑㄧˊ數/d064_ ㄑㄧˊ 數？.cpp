#include <iostream>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    while (cin >> n)
        if (n % 2 == 0)
            cout << "Even" << endl;
        else
            cout << "Odd" << endl;
    return 0;
}
