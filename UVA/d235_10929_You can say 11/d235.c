// 題目 : https://zerojudge.tw/ShowProblem?problemid=d235
// 作者 : Calvin Wan
// 時間 : 2022/01/07

#include <stdio.h>
#include <string.h>

// 11的倍數(奇數項-偶數項)也會是11的倍數
int main()
{
    char number[1000];
    while (scanf("%s", &number) != EOF)
    {
        if (number[0] == '0' && strlen(number) == 1)
            break;

        long long int temp = 0;
        for (int i = 0; i < strlen(number); i++)
            if (i % 2)
                temp -= (int)number[i] - 48;
            else
                temp += (int)number[i] - 48;
        if (temp % 11)
            printf("%s is not a multiple of 11.\n", number);
        else
            printf("%s is a multiple of 11.\n", number);
    }
    return 0;
}
