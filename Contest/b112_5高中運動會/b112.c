// 題目 : https://zerojudge.tw/ShowProblem?problemid=b112
// 作者 : Calvin Wan
// 時間 : 2022/01/11

#include <stdio.h>

int GCD(int a, int b)
{
    if (b)
        return GCD(b, a % b);
    else
        return a;
}

int main()
{
    int n, people, userinput;

    while (scanf("%d", &n) != EOF)
    {
        scanf("%d", &userinput);
        for (int i = 1; i < n; i++)
        {
            scanf("%d", &people);
            if (people >= userinput)
                userinput = GCD(people, userinput);
            else
                userinput = GCD(userinput, people);
        }
        printf("%d\n", userinput);
    }

    return 0;
}
