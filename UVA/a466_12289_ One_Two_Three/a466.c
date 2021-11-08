// 題目 : https://zerojudge.tw/ShowProblem?problemid=a466
// 作者 : Calvin Wan
// 時間 : 2021/11/08

#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    scanf("%d", &n);
    while (n--)
    {
        char UserInput[10];
        scanf("%s", &UserInput);
        if (strlen(UserInput) == 5)
            printf("3\n");
        else
        {
            int wrong = 0;
            if (UserInput[0] != 'o')
                wrong++;
            if (UserInput[1] != 'n')
                wrong++;
            if (UserInput[2] != 'e')
                wrong++;
            if (wrong <= 1)
                printf("1\n");
            else
                printf("2\n");
        }
    }
    return 0;
}