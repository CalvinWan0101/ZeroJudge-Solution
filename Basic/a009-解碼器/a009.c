// 題目 : https://zerojudge.tw/ShowProblem?problemid=a009
// 作者 : Calvin Wan
// 時間 : 2021/08/11

#include <stdio.h>
#include <string.h>
int main()
{
    char a[1000];
    scanf("%s", a);
    // 沒有輸入的格子内容物會是空字符[\0]
    for (int i = 0; a[i] != '\0'; i++)
        // 依照題目敘述運用ASCII碼來計算(輸入 -7 = 答案)
        // ASCII碼參考 : http://shihyu.github.io/books/apas01.html
        printf("%c", a[i] - 7);
    return 0;
}