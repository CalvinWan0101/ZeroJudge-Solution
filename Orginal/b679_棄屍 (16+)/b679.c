// 題目 : https://zerojudge.tw/ShowProblem?problemid=b679
// 作者 : Calvin Wan
// 時間 : 2022/01/09

#include <stdio.h>
#include <math.h>

int main()
{
    long long int n, ans;
    while (scanf("%lld", &n) != EOF)
    {
        ans = sqrt(2 * n);
        printf("%lld\n", ans);
    }
    return 0;
}
