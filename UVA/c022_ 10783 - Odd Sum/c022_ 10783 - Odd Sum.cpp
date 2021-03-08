#include <iostream>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        int a, b;
        cin >> a >> b;
        int count = 0;
        for (int j = a; j <= b; j++)
            if (j % 2 == 1)
                count += j;
        cout << "Case " << i << ": " << count << endl;
    }
    return 0;
}
