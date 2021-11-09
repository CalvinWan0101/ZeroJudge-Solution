// 題目 : https://zerojudge.tw/ShowProblem?problemid=c013
// 作者 : Calvin Wan
// 時間 : 2021/11/09

#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    while (n--)
    {
        int a, b;
        scanf("%d%d", &a, &b);
        while (b--)
        {
            for (int i = 1; i <= a; i++)
            {
                for (int j = 1; j <= i; j++)
                    printf("%d", i);
                printf("\n");
            }
            for (int i = a - 1; i >= 0; i--)
            {
                for (int j = 1; j <= i; j++)
                    printf("%d", i);
                printf("\n");
            }
        }
    }
    return 0;
}