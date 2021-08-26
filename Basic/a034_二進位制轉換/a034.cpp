// 題目 : https://zerojudge.tw/ShowProblem?problemid=a034
// 作者 : Calvin Wan
// 時間 : 2021/08/22

#include <iostream>
using namespace std;
int main()
{
    // array用來存放轉換完的二進制數,n為原始數字
    int array[100], n;
    while (cin >> n)
    {

        int m = 0;
        // 二進制參考 : https://notfalse.net/17/positional-numeral-systems-conversion
        while (n > 0)
        {
            // 把n % 2存進去
            array[m] = n % 2;
            // 往前面走一格
            m++;
            // 更新n
            n /= 2;
        }
        for (int i = m - 1; i >= 0; i--)
            cout << array[i];
        cout << endl;
    }
    return 0;
}