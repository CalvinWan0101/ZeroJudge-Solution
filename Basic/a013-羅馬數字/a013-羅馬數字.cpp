// 題目 : https://zerojudge.tw/ShowProblem?problemid=a013
// 作者 : Calvin Wan
// 時間 : 2021/08/18

#include <iostream>
#include <string>
using namespace std;

// 用來把羅馬數字轉換成數字的函數(解説放在後面)
int transfer(string a);

int main()
{
    // 初始的兩個羅馬數字
    string a, b;
    int sum, suma, sumb;
    while (cin >> a >> b)
    {
        // 依題意遇到 # 就停止
        if (a == "#")
            break;
        // 將第一個羅馬數字a轉換成阿拉伯數字suma
        suma = transfer(a);
        // 將第二個羅馬數字b轉換成阿拉伯數字sumb
        sumb = transfer(b);
        // 計算suma,sumb差值,如果是負的就轉成正的
        int sum = suma - sumb;
        if (sum < 0)
            sum *= -1;
        // 將所有羅馬數字的組合列出
        // 將欲轉換的數字從大減到小再存回
        // 同時增加所減掉數字所對應的羅馬數字
        // 直到結果為0
        // 羅馬數字的全部組合以及對應的阿拉伯數字
        string rom[13] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
        int romnum[13] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
        // 用來存放結果的string
        string print = "";
        // 如果插值為0就輸出ZERO
        if (sum == 0)
            cout << "ZERO" << endl;
        else
        {
            for (int i = 0; i < 13; i++)
            {
                if (sum < romnum[i])
                    continue;
                while (sum >= romnum[i])
                {
                    sum -= romnum[i];
                    print += rom[i];
                }
            }
            cout << print << endl;
        }
    }
    return 0;
}

// 羅馬數字轉換數字函數想法
// 羅馬數字一組字母代表一位數字
// 一組又有分如"V"一個字母為一組以及如 "IV" 兩個字母為一組
// 兩個一組的人就往下多加一格
// 先設立可以兩個字母為一組的開頭字母如 "I" "X" "C"
// 再判斷只能單獨一個為一組的如 "V" "L" "D" "M"
int transfer(string a)
{
    int sum = 0;
    for (int i = 0; i < a.length(); i++)
    {
        // I開頭,包含 "I" "IV" "IX"
        if (a[i] == 'I')
        {
            // IV
            if (a[i + 1] == 'V')
            {
                sum += 4;
                i++;
            }
            // IX
            else if (a[i + 1] == 'X')
            {
                sum += 9;
                i++;
            }
            // I
            else
                sum += 1;
        }
        // X開頭,包含 "X" "XL" "XC"
        else if (a[i] == 'X')
        {
            // XL
            if (a[i + 1] == 'L')
            {
                sum += 40;
                i++;
            }
            // XC
            else if (a[i + 1] == 'C')
            {
                sum += 90;
                i++;
            }
            // X
            else
                sum += 10;
        }
        // C開頭,包含 "C" "CD" "CM"
        else if (a[i] == 'C')
        {
            // CD
            if (a[i + 1] == 'D')
            {
                sum += 400;
                i++;
            }
            // CM
            else if (a[i + 1] == 'M')
            {
                sum += 900;
                i++;
            }
            // C
            else
                sum += 100;
        }
        // 單獨V
        else if (a[i] == 'V')
            sum += 5;
        // 單獨L
        else if (a[i] == 'L')
            sum += 50;
        // 單獨D
        else if (a[i] == 'D')
            sum += 500;
        // 單獨M
        else if (a[i] == 'M')
            sum += 1000;
    }
    return sum;
}