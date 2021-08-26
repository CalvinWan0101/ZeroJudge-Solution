#include <iostream>
using namespace std;
int main()
{
    long long int a, b, n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a >> b;
        if (a - b == 0)
        {
            cout << "=" << endl;
        }
        else if (a - b > 0)
        {
            cout << ">" << endl;
        }
        else
        {
            cout << "<" << endl;
        }
    }
    return 0;
}