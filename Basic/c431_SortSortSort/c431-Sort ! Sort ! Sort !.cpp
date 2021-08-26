#include <stdio.h> 
using namespace std;
int main()
{
    int n, input, bucket[101] = {0};
    scanf(" %d", &n);
    for (int i = 1; i <= n; i++)
    {
        scanf(" %d", &input);
        bucket[input]++;
    }
    for (int i = 1; i <= 100; i++)
    {
        if (bucket[i] != 0)
            for (int j = 1; j <= bucket[i]; j++)
            {
                printf("%d", i);
                printf(" ");
            }
    }
    return 0;
}
