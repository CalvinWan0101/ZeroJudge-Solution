#include <iostream>
using namespace std;
int main()
{
    long long int a, b = 0;
    cin >> a;
    while (cin >> a)
    {
        b += a;
        cout << b << " ";
    }
    return 0;
}
