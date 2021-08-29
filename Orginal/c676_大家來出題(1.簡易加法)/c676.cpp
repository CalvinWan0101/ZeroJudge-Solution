// 題目 : https://zerojudge.tw/ShowProblem?problemid=c676
// 作者 : Calvin Wan
// 時間 : 2021/08/29

#include <iostream>
int main()
{
    // 就是輸出 a b a+b 但是每次輸出不能一樣且不能有0
    // 直接輸出就好,沒有標準答案的
    // 生成1~100+1的測資
    for (int i = 1; i <= 100; i++)
        std::cout << "1 " << i << " " << i + 1 << '\n';
    return 0;
}