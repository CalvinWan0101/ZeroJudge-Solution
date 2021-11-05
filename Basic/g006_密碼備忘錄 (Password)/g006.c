// 題目 : https://zerojudge.tw/ShowProblem?problemid=g006
// 作者 : Calvin Wan
// 時間 : 2021/11/05

#include <stdio.h>
#include <string.h>

int main()
{
    char UserInput[100];
    scanf("%s", &UserInput);
    int count[26] = {0};

    for (int i = 0; i < strlen(UserInput); i++)
        count[UserInput[i] - 65]++;

    for (int i = 100; i >= 1; i--)
        for (int j = 0; j < 26; j++)
            if (count[j] == i)
                printf("%c", j + 65);
    return 0;
}