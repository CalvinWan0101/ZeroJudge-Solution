// 題目 : https://zerojudge.tw/ShowProblem?problemid=b978
// 作者 : Calvin Wan
// 時間 : 2022/01/07

#include <stdio.h>
#include <string.h>

int main()
{
    char English[100];
    int Number[100];

    while (scanf("%s", English) != EOF)
    {
        for (int i = 0; i < strlen(English); i++)
            scanf("%d", &Number[i]);

        for (int i = 1; i <= strlen(English); i++)
            for (int j = 0; j < strlen(English); j++)
                if (Number[j] == i)
                {
                    printf("%c", English[j]);
                    break;
                }
        printf("\n");
    }
    return 0;
}
