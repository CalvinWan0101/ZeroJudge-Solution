#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, max = -1000000, answer = -1000000;
    cin >> n;
    int array[100000];
    for (int i = 1; i <= n; i++)
    {
        cin >> array[i];
        if (array[i] > max)
            max = array[i];
        if (max - array[i] > answer)
            answer = max - array[i];
    }
    cout << answer << endl;
    return 0;
}
