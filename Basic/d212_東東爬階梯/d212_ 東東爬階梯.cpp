#include <iostream>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    long long unsigned int array[101];
    array[0] = 1;
    array[1] = 1;
    for (int i = 2; i < 101; i++)
        array[i] = (array[i - 1] + array[i - 2]);
    int n;
    while (cin >> n)
        cout << array[n] << endl;
    return 0;
}
