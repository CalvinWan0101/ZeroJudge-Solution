#include <iostream>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    double n;
    while (cin >> n)
        printf("%.3lf \n", (n + 40) / 1.8 - 40);
    return 0;
}
