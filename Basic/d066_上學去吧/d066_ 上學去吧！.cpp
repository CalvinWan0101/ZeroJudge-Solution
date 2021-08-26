#include <iostream>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int a, b;
    while (cin >> a >> b)
    {
        if (a < 7 || a >= 17)
            cout << "Off School" << endl;
        else if (a > 7 && a < 17)
            cout << "At School" << endl;
        else if (a == 7)
            if (b < 30)
                cout << "Off School" << endl;
            else
                cout << "At School" << endl;
    }
    return 0;
}
