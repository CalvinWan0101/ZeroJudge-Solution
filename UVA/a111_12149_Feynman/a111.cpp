// 題目 : https://zerojudge.tw/ShowProblem?problemid=a111
// 作者 : Calvin Wan
// 時間 : 2021/10/25

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n;
    // 公式:n*n + (n-1)*(n-1) + (n-2)*(n-2) + ...... + 1*1
    while (cin >> n && n != 0)
    {
        int count = 0;
        for (int i = n; i >= 1; i--)
            count += i * i;
        cout << count << endl;
    }
    return 0;
}
