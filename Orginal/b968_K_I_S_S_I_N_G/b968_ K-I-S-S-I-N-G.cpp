#include <iostream>
#include <string>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    string a, b;
    while (getline(cin, a))
    {
        getline(cin, b);
        cout << a << " and " << b << " sitting in the tree" << endl;
    }
    return 0;
}
