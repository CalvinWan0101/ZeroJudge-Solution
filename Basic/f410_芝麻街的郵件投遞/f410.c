// 題目 : https://zerojudge.tw/ShowProblem?problemid=f410
// 作者 : Calvin Wan
// 時間 : 2022/01/02

#include <stdio.h>

int main()
{
    int n, array[1000];
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
        scanf("%d", &array[i]);

    for (int i = 0; i < n; i++)
        if (array[i] % 2 == 0)
            printf("%d ", array[i]);

    for (int i = n - 1; i >= 0; i--)
        if (array[i] % 2 == 1)
            printf("%d ", array[i]);

    return 0;
}
