// 題目 : https://zerojudge.tw/ShowProblem?problemid=d985
// 作者 : Calvin Wan
// 時間 : 2022/01/05

#include <stdio.h>

int main()
{
    int n, m;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        int count = 0, best = 999999, min, sec;
        scanf("%d", &m);

        for (int i = 0; i < m; i++)
        {
            scanf("%d%d", &min, &sec);
            count += min * 60 + sec;
            if (min * 60 + sec < best)
                best = min * 60 + sec;
        }
        count /= m;
        printf("Track %d: \nBest Lap: %d minute(s) %d second(s).\nAverage: %d minute(s) %d second(s).\n", i, best / 60, best % 60, count / 60, count % 60);
    }
    return 0;
}
