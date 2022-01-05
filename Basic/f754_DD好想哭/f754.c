// 題目 : https://zerojudge.tw/ShowProblem?problemid=f754
// 作者 : Calvin Wan
// 時間 : 2022/01/06

#include <stdio.h>

int main()
{
    long long int n, money, people;
    scanf("%lld", &n);
    for (int i = 1; i <= n; i++)
    {
        scanf("%lld%lld", &money, &people);
        printf("Case %d :\n", i);

        for (int j = 1; j < people; j++)
            printf("第%lld位 : 拿%lld元並說DD! BAD!\n", j, money / people);
        printf("第%lld位 : 拿%lld元並說DD! BAD!\n", people, money / people + money % people);
    }
    return 0;
}
