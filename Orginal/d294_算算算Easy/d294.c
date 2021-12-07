// 題目 : https://zerojudge.tw/ShowProblem?problemid=d294
// 作者 : Calvin Wan
// 時間 : 2021/11/14

#include <stdio.h>

int main()
{
    long long int a, b;
    while (scanf("%lld%lld", &a, &b) != EOF)
        printf("%lld\n", a * (a + 1) * b * (b + 1) / 4);
    return 0;
}