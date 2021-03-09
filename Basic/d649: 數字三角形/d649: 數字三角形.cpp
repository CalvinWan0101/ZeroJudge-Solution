#include <iostream>
using namespace std;
int main()
{
    int n;
    while (cin >> n && n != 0)
        for (int i = 0; i < n; i++)
        {
            for (int j = n - 1; j > i; j--)
                cout << "_";

            for (int j = 0; j <= i; j++)
                cout << "+";

            cout << endl;
            cout << endl;
        }
    return 0;
}
