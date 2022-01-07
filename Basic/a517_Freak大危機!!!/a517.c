// 題目 : https://zerojudge.tw/ShowProblem?problemid=a517
// 作者 : Calvin Wan
// 時間 : 2022/01/07

#include <stdio.h>

int main()
{
    unsigned long long int a, b, c;
    while (scanf("%llu%llu%llu", &a, &b, &c) == 3)
        if (a <= b && a <= c)
            printf("%llu\n", b + c - a);
        else if (b <= a && b <= c)
            printf("%llu\n", a + c - b);
        else
            printf("%llu\n", a + b - c);

    return 0;
}
