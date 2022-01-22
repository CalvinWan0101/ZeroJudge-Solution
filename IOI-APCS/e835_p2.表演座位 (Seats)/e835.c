// 題目 : https://zerojudge.tw/ShowProblem?problemid=e835
// 作者 : Calvin Wan
// 時間 : 2022/01/22

#include <stdio.h>

int main()
{
    int n;
    while (scanf("%d", &n) != EOF)
        if (n <= 2500)
            if (n % 25)
                printf("1 %d %d\n", n / 25 + 1, n % 25);
            else
                printf("1 %d 25\n", n / 25);
        else if (n <= 7500)
            if (n % 50)
                printf("2 %d %d\n", (n - 2500) / 50 + 1, (n - 2500) % 50);
            else
                printf("2 %d 50\n", (n - 2500) / 50);
        else if (n % 25)
            printf("3 %d %d\n", (n - 7500) / 25 + 1, (n - 7500) % 25);
        else
            printf("3 %d 25\n", (n - 7500) / 25);
    return 0;
}
