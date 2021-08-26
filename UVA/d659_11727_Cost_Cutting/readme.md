# d659_11727_Cost Cutting

### 🔗題目鏈接

[Click Here👈](https://zerojudge.tw/ShowProblem?problemid=d659)

### 📋解題報告

**排序后直接輸出第二項**

這邊直接使用sort函數(只有三項,不會花多少時間),需要先引入 `#include <algorithm>`

```c++

for (int i = 0; i <= 2; i++)
    scanf("%d", &input[i]);

std::sort(input, input + 3);

```