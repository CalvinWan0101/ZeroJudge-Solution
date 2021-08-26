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
            if (a[i] <= 64 || a[i] >= 91 && a[i] <= 96 || a[i] >= 123)
                a[i] = ' ';
        int count = 0;
        for (int i = 0; i < a.length(); i++)
        {
            if (a[i] == ' ' && a[i - 1] != ' ')
                count++;
            else if (i == a.length() - 1 && a[i] != ' ')
                count++;
        }
        cout << count << endl;
    }
    return 0;
}
