// 題目 : https://zerojudge.tw/ShowProblem?problemid=a861
// 作者 : Calvin Wan
// 時間 : 2021/11/13

#include <stdio.h>

int main()
{
    int a, b;
    while (scanf("%d%d", &a, &b) != EOF)
        printf("%d\n", a + b + a + b);
    return 0;
}