// 題目 : https://zerojudge.tw/ShowProblem?problemid=d096
// 作者 : Calvin Wan
// 時間 : 2022/02/26

#include <stdio.h>
int main()
{
    long long int n, m;
    while (scanf("%lld", &n) != EOF)
    {
        m = (1 + (n + 1) / 2 * 2 - 1) * (n + 1) / 2 - 1;
        printf("%lld\n", m * 3 - 6);
    }
    return 0;
}