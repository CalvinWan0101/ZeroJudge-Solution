// 題目 : https://zerojudge.tw/ShowProblem?problemid=e541
// 作者 : Calvin Wan
// 時間 : 2021/11/08

#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main()
{
    int n, q, time = 0, array[10000], buffer;
    while (scanf("%d%d", &n, &q) && n != 0 && q != 0)
    {
        time++;
        printf("CASE# %d:\n", time);
        for (int i = 0; i < n; i++)
            scanf("%d", &array[i]);
        for (int i = 0; i < n - 1; i++)
            for (int j = i + 1; j < n; j++)
                if (array[i] > array[j])
                {
                    int buffer = array[i];
                    array[i] = array[j];
                    array[j] = buffer;
                }
        while (q--)
        {
            bool flag = true;
            scanf("%d", &buffer);
            for (int i = 0; i < n; i++)
                if (array[i] == buffer)
                {
                    printf("%d found at %d\n", buffer, i + 1);
                    flag = false;
                    break;
                }
            if (flag)
                printf("%d not found\n", buffer);
        }
    }
    return 0;
}