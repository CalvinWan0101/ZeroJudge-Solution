// 題目 : https://zerojudge.tw/ShowProblem?problemid=a135
// 作者 : Calvin Wan
// 時間 : 2021/11/08

#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int CheckString(char A[], char B[])
{
    if (strlen(A) == strlen(B))
    {
        for (int i = 0; i < strlen(A); i++)
            if (A[i] != B[i])
                return 0;
        return 1;
    }
    else
        return 0;
}

int main()
{
    char UserInput[100], Hello[6][20] = {"HELLO", "HOLA", "HALLO", "BONJOUR", "CIAO", "ZDRAVSTVUJTE"}, Language[6][20] = {"ENGLISH", "SPANISH", "GERMAN", "FRENCH", "ITALIAN", "RUSSIAN"};
    char end[] = "#";
    int count = 0;
    while (scanf("%s", &UserInput) && !CheckString(UserInput, end))
    {
        count++;
        bool flag = true;
        for (int i = 0; i < 6; i++)
            if (CheckString(UserInput, Hello[i]))
            {
                printf("Case %d: %s\n", count, Language[i]);
                flag = false;
                break;
            }
        if (flag)
            printf("Case %d: UNKNOWN\n", count);
    }
    return 0;
}