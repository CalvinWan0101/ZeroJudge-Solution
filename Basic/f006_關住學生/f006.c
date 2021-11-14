// 題目 : https://zerojudge.tw/ShowProblem?problemid=f006
// 作者 : Calvin Wan
// 時間 : 2021/11/14

#include <stdio.h>

int main()
{
    int n, user, max = -1, min = 10001;
    scanf("%d", &n);
    while (n--)
    {
        scanf("%d", &user);
        if (user > max)
            max = user;
        if (user < min)
            min = user;
    }
    printf("%d %d", max, min);
    return 0;
}