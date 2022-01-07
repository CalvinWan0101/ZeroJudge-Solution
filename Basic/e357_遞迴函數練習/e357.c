// 題目 : https://zerojudge.tw/ShowProblem?problemid=e357
// 作者 : Calvin Wan
// 時間 : 2022/01/07

#include <stdio.h>
int fun(int x)
{
    if (x == 1)
        return 1;
    else if (x % 2 == 0)
        return fun(x / 2);
    else
        return fun(x - 1) + fun(x + 1);
}

int main()
{
    int n;
    while (scanf("%d", &n) != EOF)
        printf("%d", fun(n));
    return 0;
}
