// 題目 : https://zerojudge.tw/ShowProblem?problemid=f426
// 作者 : Calvin Wan
// 時間 : 2021/08/29

#include <iostream>
using namespace std;
int main()
{
    // 預設全部都是質數
    bool prime[10001];
    for (int i = 0; i < 10001; i++)
        prime[i] = 1;
    // 0和1不是質數
    prime[0] = false;
    prime[1] = false;
    for (int i = 2; i < 10001; i++)
        if (prime[i])
            // 從i倍開始刪掉質數i的倍數
            // 質數表參考鏈接 : http://web.ntnu.edu.tw/~algo/Prime.html
            for (int j = i * i; j < 10001; j += i)
                prime[j] = false;

    int n, m, counts = 0, countb = 0;
    cin >> n >> m;
    for (int i = n; i <= m; i++)
        if (prime[i])
        {
            counts++;
            countb += i;
        }
    cout << counts << '\n'
         << countb << '\n';
    return 0;
}