#include <iostream>
#include <string>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    string a;
    while (getline(cin, a))
        cout << "Go, " << a << ", go go" << endl;
    return 0;
}
