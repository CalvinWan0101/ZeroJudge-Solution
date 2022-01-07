// 題目 : https://zerojudge.tw/ShowProblem?problemid=c705
// 作者 : Calvin Wan
// 時間 : 2022/01/08

#include <stdio.h>

int main()
{
    unsigned int a, ans[4];
    while (scanf("%u", &a) != EOF)
    {
        for (int i = 0; i < 4; i++)
        {
            ans[i] = a % 256;
            a /= 256;
        }
        printf("%u.%u.%u.%u\n", ans[3], ans[2], ans[1], ans[0]);
    }
    return 0;
}
