// 題目 : https://zerojudge.tw/ShowProblem?problemid=b993
// 作者 : Calvin Wan
// 時間 : 2022/01/08

#include <stdio.h>

int main()
{
    long long int n, i, ans, temp;
    while (scanf("%lld", &n) != EOF)
    {
        ans = -1;
        for (i = 0; i < n; i++)
        {
            scanf("%lld", &temp);
            if (temp > ans)
                ans = temp;
        }
        printf("%d\n", ans);
    }
    return 0;
}
