// 題目 : https://zerojudge.tw/ShowProblem?problemid=h089
// 作者 : Calvin Wan
// 時間 : 2022/01/30

#include <stdio.h>

void pizza(int n, char A, char B, char C)
{
    if (n <= 0)
        return;
    else
    {
        pizza(n - 1, A, C, B);
        printf("from %c to %c\n", A, C);
        pizza(n - 1, B, A, C);
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    pizza(n, 'A', 'B', 'C');
    return 0;
}
