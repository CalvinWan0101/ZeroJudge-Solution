// 題目 : https://zerojudge.tw/ShowProblem?problemid=f925
// 作者 : Calvin Wan
// 時間 : 2022/01/07

#include <stdio.h>

int main()
{
    int month, day;
    scanf("%d%d", &month, &day);
    if (month == 6 && day == 12)
        printf("Yes\n");
    else
        printf("No\n");
    return 0;
}
