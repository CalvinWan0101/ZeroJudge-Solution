// 題目 : https://zerojudge.tw/ShowProblem?problemid=f063
// 作者 : Calvin Wan
// 時間 : 2022/01/01

#include <stdio.h>

int main()
{
    int n, k, temp, ans = -1;
    scanf("%d", &n);

    while (n--)
    {
        int min = 99999;
        scanf("%d", &k);
        while (k--)
        {
            scanf("%d", &temp);
            if (temp < min)
                min = temp;
        }
        if (min > ans)
            ans = min;
    }

    printf("%d", ans);
    return 0;
}
