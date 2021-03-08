#include <iostream>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int array[10001], n, buffer;
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> array[i];
    int count = 0;
    for (int i = 1; i <= n - 1; i++)
        for (int j = i + 1; j <= n; j++)
            if (array[i] > array[j])
            {
                buffer = array[i];
                array[i] = array[j];
                array[j] = buffer;
                count++;
            }
    cout << count << endl;
}
