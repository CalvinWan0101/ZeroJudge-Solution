// 題目 : https://zerojudge.tw/ShowProblem?problemid=a001
// 作者 : Calvin Wan
// 時間 : 2021/08/10

#include <iostream>
using namespace std;
int main()
{
    // 建立一個input的字串a
    string a;
    // 當輸入字串a的時候就會輸出"hello, "+ a
    while (cin >> a)
        cout << "hello, " << a <<endl;
    return 0;
}