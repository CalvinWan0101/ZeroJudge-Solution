// 題目 : https://zerojudge.tw/ShowProblem?problemid=a012
// 作者 : Calvin Wan
// 時間 : 2021/10/25

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    long long int a, b;
    // 用abs()取絕對值
    while (cin >> a >> b)
        cout << abs(a - b) << endl;
    return 0;
}
