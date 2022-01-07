// 題目 : https://zerojudge.tw/ShowProblem?problemid=c730
// 作者 : Calvin Wan
// 時間 : 2022/01/08

#include <stdio.h>

int main()
{
    int apple[10], hand, count = 0;

    for (int i = 0; i < 10; i++)
        scanf("%d", &apple[i]);
    scanf("%d", &hand);

    for (int i = 0; i < 10; i++)
        if (apple[i] <= hand + 30)
            count++;
    printf("%d\n", count);
    return 0;
}
