// 題目 : https://zerojudge.tw/ShowProblem?problemid=f651
// 作者 : Calvin Wan
// 時間 : 2022/01/07

#include <stdio.h>

int main()
{
    int n;
    while (scanf("%d", &n) != EOF)
        printf("%d\n", n / 3 + (n % 3 > 0 ? 1 : 0));
    return 0;
}
