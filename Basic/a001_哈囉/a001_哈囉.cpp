#include <iostream>
using namespace std;
int main()
{
    //建立一個input的字串a
    string a;
    //當輸入字串a的時候就會輸出"hello, a"
    while (cin >> a)
        cout << "hello, " << a << '\n';
    return 0;
}