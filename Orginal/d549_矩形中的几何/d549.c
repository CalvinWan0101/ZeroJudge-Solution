// 題目 : https://zerojudge.tw/ShowProblem?problemid=d549
// 作者 : Calvin Wan
// 時間 : 2022/01/20

#include <stdio.h>
#include <math.h>

int main()
{
    // Pa^2+pc^2=pb^2+pc^2
    long long int pa, pb, pc;
    while (scanf("%lld%lld%lld", &pa, &pb, &pc) == 3)
        printf("%.2f\n", sqrt(pa * pa + pc * pc - pb * pb));
    return 0;
}
