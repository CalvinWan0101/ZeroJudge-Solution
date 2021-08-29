// 題目 : https://zerojudge.tw/ShowProblem?problemid=b968
// 作者 : Calvin Wan
// 時間 : 2021/08/29

#include <iostream>
#include <string>
using namespace std;
int main()
{
    string a, b;
    // 需要使用getline,輸入的名字有一筆測資有空格
    while (getline(cin, a) && getline(cin, b))
        cout << a << " and " << b << " sitting in the tree" << endl;
    return 0;
}