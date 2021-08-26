#include <iostream>
#include <string>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    string a;
    while (getline(cin, a))
    {
        for (int i = 0; i < a.length(); i++)
        {
            a[i] -= 7;
            cout << a[i];
        }
        cout << endl;
    }
    return 0;
}
