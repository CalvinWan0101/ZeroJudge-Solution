// 題目 : https://zerojudge.tw/ShowProblem?problemid=f425
// 作者 : Calvin Wan
// 時間 : 2021/08/29

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	// 點abc的xy坐標
	int ax, ay, bx, by, cx, cy;
	cin >> ax >> ay >> bx >> by >> cx >> cy;
	// ab,ac向量以及ac向量
	int abx = bx - ax;
	int aby = by - ay;
	int acx = cx - ax;
	int acy = cy - ay;
	// 兩向量外積絕對值求面積*2
	cout << abs(abx * acy - aby * acx) << endl;
	return 0;
}