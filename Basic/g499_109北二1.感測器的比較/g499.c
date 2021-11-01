// 題目 : https://zerojudge.tw/ShowProblem?problemid=g499
// 作者 : Calvin Wan
// 時間 : 2021/11/01

#include <math.h>
#include <stdio.h>

int main()
{
    unsigned int A, B, m, n, count = 0;
    scanf("%d", &n);
    while (n-- && scanf("%d%d", &A, &B))
    {
        int array_A[32] = {0}, array_B[32] = {0};
        // 將A轉成2進制
        m = 0;
        while (A > 0)
        {
            array_A[m] = A % 2;
            m++;
            A /= 2;
        }
        // 將B轉成2進制
        m = 0;
        while (B > 0)
        {
            array_B[m] = B % 2;
            m++;
            B /= 2;
        }
        // 判斷並使用cound記錄
        for (int i = 0; i < 32; i++)
            if (array_A[i] == 0 && array_B[i] == 1)
                count++;
    }
    printf("%d", count);
    return 0;
}