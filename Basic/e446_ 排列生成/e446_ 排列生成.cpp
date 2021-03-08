#include <iostream>
using namespace std;
int n, answer[11], bucket[11] = {0};
void dfs(int step)
{
    if (step == n + 1)
    {
        for (int i = 1; i <= n; i++)
            cout << answer[i] << " ";
        cout << '\n';
    }
    for (int i = 1; i <= n; i++)
        if (bucket[i] == 0)
        {
            answer[step] = i;
            bucket[i] = 1;
            dfs(step + 1);
            bucket[i] = 0;
        }
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    while (cin >> n)
        dfs(1);
}
