// 題目 : https://zerojudge.tw/ShowProblem?problemid=a011
// 作者 : Calvin Wan
// 時間 : 2021/08/30

#include <iostream>
#include <string>
using namespace std;
int main()
{
    string a;
    // 讀取輸入的字串(包含空格)
    while (getline(cin, a))
    {
        // 把不是字母的元素通通變成空格
        for (int i = 0; i < a.length(); i++)
            if (a[i] <= 64 || a[i] >= 91 && a[i] <= 96 || a[i] >= 123)
                a[i] = ' ';
        int count = 0;
        for (int i = 0; i < a.length(); i++)
        {
            // 找單字的結尾
            if (a[i] == ' ' && a[i - 1] != ' ')
                count++;
            // 整個句子的結尾
            else if (i == a.length() - 1 && a[i] != ' ')
                count++;
        }
        cout << count << endl;
    }
    return 0;
}