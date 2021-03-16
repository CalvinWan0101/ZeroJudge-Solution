題目鏈接 ▶ https://zerojudge.tw/ShowProblem?problemid=a982

我一開始用DFS寫，但是不知道是不是我的問題，反正最後一個測資就超時了,好吧那就只好屈服了,拿出好棒棒BFS。

先建立一個struct point，放x,y,step(走的次數)

```c++
struct point
{
    int x, y, step;
};
```

為啥是10001呢?因為地圖邊長是100,佇列的不會超過10000。

`struct point A[10001];`

地圖：

`char map[101][101];`

bucket記錄這個點有沒有出現過,0表示用過,1表示沒有

`int bucket[101][101] = { 0 };`

然後我們每個點都有上下左右四個方向要去嘗試,但我們需要有一套固定的SOP,右下左上依序嘗試。

`int way[4][2] = { {0,1},{1,0},{0,-1},{-1,0} };`

佇列用的變數等下解釋

`int head, tail;`

n是地圖邊長,順帶一提不論x,y我都是從1開始(個人習慣問題)

know是判斷是否抵達終點(n-1,n-1)的變數,know=0沒到，know=1到了

`int n, know;`

bufferx,buffery分別用來暫存4個方向嘗試後的x,y

`int bufferx, buffery;`

初始化佇列

`head = tail = 1;`

這邊需要有老爹跟兒子的概念,head的位置是老爹tail是兒子,一個老爹可以有很多兒子,而每個兒子也都有機會成為老爹,我覺得這邊可能要先去了解一下樹的結構還有佇列可能才會懂。起點是(2,2)

```c++
A[head].x = 2;
A[head].y = 2;
```

初始步伐
```c++
A[head].step = 1;
tail++;
```

記錄起點已經用過了

`bucket[2][2] = 1;`

初始化know表示沒有到終點

`know=0`

然後!

```c++
while (true)

{
    //當佇列不空的時候可以繼續跑
    if (tail <= head)
        break;
    //嘗試走四個方向
    for (int i = 0; i < 4; i++)
    {
        //將嘗試的結果丟進bufferx和buffery
        bufferx = A[head].x + way[i][1];
        buffery = A[head].y + way[i][0];
        //看有沒有撞墻
        if (map[buffery][bufferx] == '#')
            continue;
        //確定該點可以落腳&&沒有使用過
        if (map[buffery][bufferx] == '.' && bucket[buffery][bufferx] == 0)
        {
            bucket[buffery][bufferx] = 1;
            A[tail].y = buffery;
            A[tail].x = bufferx;
            //每個輪迴的tail都是head的兒子
            //兒子腳步=老爹腳步+1
            A[tail].step = A[head].step + 1;
            tail++;
        }
        //如果到達目標點就break掉嘗試4個方向的迴圈
        if (bufferx == n - 1 && buffery == n - 1)
        {
            know = 1;
            break;
        }
    }
    //已經到達終點就跳出endless loop
    //此時的步數為最佳解
    if (know == 1)
        break;
    else
        head++;
}
```

跳出這個無限迴圈之後,就是印出答案的部分。如果有路到終點，最後一項就會是答案,如果沒有他就會全部跑一邊，也就是最後一點並非起點到終點的距離。

最後一點的x==n-1,y==n-1就印出來
```c++
if (A[tail - 1].x == n - 1 && A[tail - 1].y == n - 1)
cout << A[tail - 1].step << endl;
//沒有路到終點      
else
cout << "No solution!" << endl;
```
