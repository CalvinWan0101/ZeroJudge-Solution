// 題目 : https://zerojudge.tw/ShowProblem?problemid=g497
// 作者 : Calvin Wan
// 時間 : 2022/01/03

#include <stdio.h>

int main()
{
    int n, before = 1, now, ans = 0;

    scanf("%d", &n);

    while (n--)
    {
        scanf("%d", &now);
        int temp = now - before;
        if (temp > 0)
            ans += temp * 3;
        else
            ans -= temp * 2;
        before = now;
    }

    printf("%d\n", ans);
    return 0;
}
