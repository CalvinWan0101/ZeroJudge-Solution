#include <iostream>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int h, d, v;
    while (cin >> h >> d >> v)
        if (h * v >= d)
            cout << h << " " << d << " " << v << ". I will make it!" << endl;
        else
            cout << h << " " << d << " " << v << ". I will be late!" << endl;
    return 0;
}
