#include <iostream>
#include <algorithm>
int main()
{
    int input[3], n, buffer;
    scanf("%d", &n);
    for (int u = 1; u <= n; u++)
    {
        for (int i = 0; i <= 2; i++)
            scanf("%d", &input[i]);
        std::sort(input, input + 3);
        printf("Case %d: %d \n", u, input[1]);
    }
    return 0;
}