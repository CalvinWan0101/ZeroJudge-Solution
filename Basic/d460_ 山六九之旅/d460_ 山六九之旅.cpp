#include <iostream>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    while (cin >> n)
    {
        if (n <= 5 && n >= 0)
            cout << "0" << endl;
        else if (n <= 11)
            cout << "590" << endl;
        else if (n <= 17)
            cout << "790" << endl;
        else if (n <= 59)
            cout << "890" << endl;
        else
            cout << "399" << endl;
    }
    return 0;
}
