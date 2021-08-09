// 題目 : https://zerojudge.tw/ShowProblem?problemid=a001
// 作者 : Calvin Wan
// 時間 : 2021/08/10

#include <stdio.h>
int main()
{
    // 建立一個input的字串a
    int a[10];
    // 當輸入字串a的時候就會輸出"hello, "+ a
    while (scanf("%s", &a) == 1)
        printf("hello, %s", a);
    return 0;
}