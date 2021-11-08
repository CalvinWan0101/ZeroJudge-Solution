// 題目 : https://zerojudge.tw/ShowProblem?problemid=e540
// 作者 : Calvin Wan
// 時間 : 2021/11/08

#include <stdio.h>
#include <string.h>

int main()
{
    char UserInput[80];
    int n;
    scanf("%d", &n);
    while (n--)
    {
        int flag = 0, count = 0;
        scanf("%s", &UserInput);
        for (int i = 0; i < strlen(UserInput); i++)
            if (UserInput[i] == 'O')
            {
                flag++;
                count += flag;
            }
            else
                flag = 0;
        printf("%d\n", count);
    }
    return 0;
}