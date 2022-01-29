// 題目 : https://zerojudge.tw/ShowProblem?problemid=a251
// 作者 : Calvin Wan
// 時間 : 2022/01/29

#include <stdio.h>
int main()
{
    int time;
    scanf("%d", &time);
    while (time--)
    {
        int n, fake[20];
        scanf("%d", &n);
        for (int i = 1; i <= 4; i++)
            scanf("%d", &fake[i]);

        for (int i = 5; i <= n; i++)
            fake[i] = fake[i - 4] + fake[i - 1];

        for (int i = 1; i < n; i++)
            for (int j = i + 1; j <= n; j++)
                if (fake[i] > fake[j])
                {
                    int temp = fake[i];
                    fake[i] = fake[j];
                    fake[j] = temp;
                }
        printf("%d\n", fake[n / 2 + 1]);
    }
}
