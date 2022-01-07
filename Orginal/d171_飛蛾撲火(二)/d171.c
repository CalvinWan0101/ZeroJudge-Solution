// 題目 : https://zerojudge.tw/ShowProblem?problemid=d171
// 作者 : Calvin Wan
// 時間 : 2022/01/07

#include <stdio.h>
#include <math.h>

int main()
{
    int a, b;
    while (scanf("%d%d", &a, &b) == 2)
        printf("%d\n", (int)(b * log10(a) + 1));
    return 0;
}
