// 題目 : https://zerojudge.tw/ShowProblem?problemid=c290
// 作者 : Calvin Wan
// 時間 : 2022/01/16

#include <stdio.h>
#include <string.h>

int main()
{
    char user_input[1000];
    int odd = 0, even = 0;

    scanf("%s", user_input);

    for (int i = 0; i < strlen(user_input); i++)
        if (i % 2)
            even += user_input[i] - 48;
        else
            odd += user_input[i] - 48;

    printf("%d\n", odd > even ? odd - even : even - odd);
    
    return 0;
}
