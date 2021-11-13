// 題目 : https://zerojudge.tw/ShowProblem?problemid=e934
// 作者 : Calvin Wan
// 時間 : 2021/11/13

#include <stdio.h>
#include <string.h>

int main()
{
    char DNA[1000];
    scanf("%s", &DNA);
    for (int i = 0; i < strlen(DNA); i++)
        switch (DNA[i])
        {
        case 'T':
            printf("A");
            break;
        case 'A':
            printf("U");
            break;
        case 'G':
            printf("C");
            break;
        case 'C':
            printf("G");
            break;
        }
    return 0;
}