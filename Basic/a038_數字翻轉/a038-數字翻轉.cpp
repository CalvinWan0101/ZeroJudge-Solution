#include <iostream>
#include <string>
using namespace std;
int main()
{
    string a;
    cin >> a;
    int k = -1;
    //找非0記錄k
    for (int i = a.length() - 1; i >= 0; i--)
        if (a[i] != '0')
        {
            k = i;
            break;
        }
    // k==-1代表整個字串全部都是零，不論1個零還是100個零輸出都是一個零
    if (k == -1)
        cout << '0' << endl;
    else
        for (int i = k; i >= 0; i--)
            cout << a[i];
    return 0;
}
