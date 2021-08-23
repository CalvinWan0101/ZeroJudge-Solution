// 題目 : https://zerojudge.tw/ShowProblem?problemid=d190
// 作者 : Calvin Wan
// 時間 : 2021/08/24

// 因爲數字只會有1~99,所以使用bucket sort
// 參考鏈接 : https://zh.wikipedia.org/wiki/%E6%A1%B6%E6%8E%92%E5%BA%8F
#include <iostream>
using namespace std;
int main()
{
    // n為數據量,k為要排序的數字
    int n, k;
    while (cin >> n && n != 0)
    {
        // 建立起陣列bucket,來記錄每個數字出現的次數(預設為0)
        int bucket[100] = {0};
        for (int i = 0; i < n; i++)
        {
            // 當輸入k的時候,bucket[k]++以記錄
            cin >> k;
            bucket[k]++;
        }
        // 從1開始到99,如果記錄中的出現次數大於1就印出來
        for (int i = 1; i < 100; i++)
            if (bucket[i] != 0)
                // 依照記錄的次數來決定印出幾次
                for (int j = 0; j < bucket[i]; j++)
                    printf("%d ", i);
        printf("\n");
    }
    return 0;
}