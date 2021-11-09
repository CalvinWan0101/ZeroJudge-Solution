// 題目 : https://zerojudge.tw/ShowProblem?problemid=a132
// 作者 : Calvin Wan
// 時間 : 2021/11/09

#include <stdio.h>

int main()
{
    // array用來存放轉換完的二進制數,n為原始數字
    int array[100], n;
    while (scanf("%d", &n) && n != 0)
    {
        int m = 0, count = 0;
        while (n > 0)
        {
            array[m] = n % 2;
            if (array[m])
                count++;
            m++;
            n /= 2;
        }
        printf("The parity of ");
        for (int i = m - 1; i >= 0; i--)
            printf("%d", array[i]);
        printf(" is %d (mod 2).\n", count);
    }
    return 0;
}