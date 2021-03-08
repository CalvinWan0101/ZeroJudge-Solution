題目鏈接 ▶ https://zerojudge.tw/ShowProblem?problemid=a011

先把不是英文字母的字符變成空格
這樣就只要處理【0】與【非0】的兩種情況
### 計數的部分
我這邊是設當下的字符為空格且前一位非空格（單字的結尾）就count++
在最後一個單字也額外count++
