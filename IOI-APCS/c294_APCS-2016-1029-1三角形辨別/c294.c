// 題目 : https://zerojudge.tw/ShowProblem?problemid=c294
// 作者 : Calvin Wan
// 時間 : 2022/01/15

#include <stdio.h>

int main()
{
    int array[3];
    while (scanf("%d%d%d", &array[0], &array[1], &array[2]) == 3)
    {
        for (int i = 0; i < 2; i++)
            for (int j = i + 1; j < 3; j++)
                if (array[i] > array[j])
                {
                    int temp = array[i];
                    array[i] = array[j];
                    array[j] = temp;
                }

        for (int i = 0; i < 3; i++)
            printf("%d ", array[i]);

        int temp = array[0] * array[0] + array[1] * array[1];

        if (array[0] + array[1] <= array[2])
            printf("\nNo\n");
        else
        {
            if (temp < array[2] * array[2])
                printf("\nObtuse\n");
            else if (temp == array[2] * array[2])
                printf("\nRight\n");
            else if (temp > array[2] * array[2])
                printf("\nAcute\n");
        }
    }
    return 0;
}
