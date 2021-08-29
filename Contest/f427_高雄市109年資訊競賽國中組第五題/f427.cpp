// 題目 : https://zerojudge.tw/ShowProblem?problemid=f427
// 作者 : Calvin Wan
// 時間 : 2021/08/29

#include <iostream>
using namespace std;
int main()
{
    // 先把小數點後16位以string存下來
    string pi = ".1415926535897932";
    int n;
    // 要哪一項就印出哪一項
    cin >> n;
    cout << pi[n] << endl;
    return 0;
}