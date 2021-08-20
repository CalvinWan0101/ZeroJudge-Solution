// 題目 : https://zerojudge.tw/ShowProblem?problemid=a022
// 作者 : Calvin Wan
// 時間 : 2021/08/21

#include <iostream>
#include <string>
using namespace std;
int main()
{
    // a是輸入的字串,b用來放a顛倒後的字串
    string a, b;
    cin >> a;
    b = a;
    // a從頭開始把元素以相反的順序丟進b裏面
    for (int i = 0; i < a.length(); i++)
        b[a.length() - 1 - i] = a[i];
    // 如果字串a和b相等則此字串為迴文
    if (a == b)
        cout << "yes" << endl;
    // 否則為非迴文
    else
        cout << "no" << endl;
    return 0;
}