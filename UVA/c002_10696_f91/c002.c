// 題目 : https://zerojudge.tw/ShowProblem?problemid=c002
// 作者 : Calvin Wan
// 時間 : 2021/11/13

#include <stdio.h>

int f91(int n)
{
    if (n >= 101)
        return n - 10;
    else
        f91(f91(n + 11));
}

int main()
{
    int n;
    while (scanf("%d", &n) && n != 0)
        printf("f91(%d) = %d\n", n, f91(n));
    return 0;
}