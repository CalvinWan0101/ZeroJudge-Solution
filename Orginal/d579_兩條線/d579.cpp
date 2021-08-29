// 題目 : https://zerojudge.tw/ShowProblem?problemid=d579
// 作者 : Calvin Wan
// 時間 : 2021/08/29

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
    double n;
    while (cin >> n)
        // 使用fixed << setprecision(4)去規定小數點后4位
        cout << fixed << setprecision(4) << "|" << n << "|=" << abs(n) << endl;
    return 0;
}