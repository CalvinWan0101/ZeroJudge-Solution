#include <iostream>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, array[1001];
    while (cin >> n)
    {
        for (int i = 0; i < n; i++)
            cin >> array[i];
        int count = 0;
        for (int i = n - 1; i > 0; i--)
            for (int j = 0; j <= i - 1; j++)
            {
                if (array[j] > array[j + 1])
                {
                    int buffer = array[j];
                    array[j] = array[j + 1];
                    array[j + 1] = buffer;
                    count++;
                }
            }
        cout << "Minimum exchange operations : " << count << endl;
    }
    return 0;
}
