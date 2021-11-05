// 題目 : https://zerojudge.tw/ShowProblem?problemid=g256
// 作者 : Calvin Wan
// 時間 : 2021/11/05

#include <stdio.h>

int main()
{
    long long int n, count;
    while (scanf("%lld", &n) != EOF)
    {
        count = 0;
        while (n != 1)
        {
            if (n % 2)
                n = 3 * n + 1;
            else
                n /= 2;
            count++;
        }
        printf("%lld\n", count);
    }

    return 0;
}