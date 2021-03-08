#include <iostream>
using namespace std;
struct point
{
	int x, y, step;
};
int main()
{
	//(1,1)開始(n-1,n-1)結束
	struct point A[10001];
	char map[101][101];
	int bucket[101][101] = { 0 };
	//右下左上順時針
	int way[4][2] = { {0,1},{1,0},{0,-1},{-1,0} };
	int head, tail;
	int n, know;
	int bufferx, buffery;
	cin >> n;
	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= n; j++)
			cin >> map[i][j];
	//佇列初始化
	head = tail = 1;
	//灌入起點資料
	A[head].x = 2;
	A[head].y = 2;
	A[head].step = 1;
	tail++;
	bucket[2][2] = 1;
	//know==0尚未到達
	//know==1到達終點
	know = 0;
	while (true)
	{
		if (tail <= head)
			break;
		//嘗試走四個方向
		for (int i = 0; i < 4; i++)
		{
			bufferx = A[head].x + way[i][1];
			buffery = A[head].y + way[i][0];
			//看有沒有超界或撞墻
			if (map[buffery][bufferx] == '#')
				continue;
			//確定該點可以落腳&&沒有使用過
			if (map[buffery][bufferx] == '.' && bucket[buffery][bufferx] == 0)
			{
				bucket[buffery][bufferx] = 1;
				A[tail].y = buffery;
				A[tail].x = bufferx;
				//每個輪迴的tail都是head的兒子
				//兒子腳步=父親腳步+1
				A[tail].step = A[head].step + 1;
				tail++;
			}
			//如果到目標點就break掉嘗試4個方向的迴圈
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
	if (A[tail - 1].x == n - 1 && A[tail - 1].y == n - 1)
		cout << A[tail - 1].step << endl;
	else
		cout << "No solution!" << endl;
	return 0;
}
