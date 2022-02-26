// 題目 : https://zerojudge.tw/ShowProblem?problemid=d658
// 作者 : Calvin Wan
// 時間 : 2022/01/30

#include <stdio.h>
#include <math.h>

int main()
{
    int n, count = 0;

    while (scanf("%d", &n) != EOF && !(n < 0))
        for (int i = 0; i <= 30; i++)
            if (pow(2, i) >= n)
            {
                printf("Case %d: %d\n", ++count, i);
                break;
            }

    return 0;
}
