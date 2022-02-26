// 題目 : https://zerojudge.tw/ShowProblem?problemid=b513
// 作者 : Calvin Wan
// 時間 : 2022/01/31

#include <stdio.h>
#include <stdbool.h>
#include <math.h>

int main()
{

    int n, number;
    scanf("%d", &n);
    while (n--)
    {
        bool flag = true;
        scanf("%d", &number);
        for (int i = 2; i <= sqrt(number); i += (i == 2 ? 1 : 2))
            if (number % i == 0)
            {
                flag = false;
                break;
            }
        if (flag)
            printf("Y\n");
        else
            printf("N\n");
    }

    return 0;
}
