#include <iostream>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    bool flag;
    while (cin >> n)
    {
        flag = 1;
        for (int i = n - 1; i > 1; i--)
            if (n % i == 0)
            {
                flag = 0;
                break;
            }
        if (flag)
            cout << "yes" << endl;
        else
            cout << "no" << endl;
    }
    return 0;
}
