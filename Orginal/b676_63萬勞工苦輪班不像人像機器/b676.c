// 題目 : https://zerojudge.tw/ShowProblem?problemid=b676
// 作者 : Calvin Wan
// 時間 : 2022/01/31

#include <stdio.h>
int main()
{
    int user_input;
    char student[5] = {'U', 'G', 'Y', 'T', 'I'};
    while (scanf("%d", &user_input) != EOF)
        printf("%c\n", student[user_input % 5]);
    return 0;
}
