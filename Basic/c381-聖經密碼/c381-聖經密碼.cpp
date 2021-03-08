#include <iostream>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, m;
    while (cin >> n >> m)
    {
        string a;
        string last;
        if (n != 0 && m != 0)
        {
            for (int i = 1; i <= n; i++)
            {
                cin >> a;
                last += a;
            }
            int k;
            for (int i = 1; i <= m; i++)
            {
                cin >> k;
                cout << last[k - 1];
            }
            cout<<endl;
        }
        else
            break;
    }
    return 0;
}
