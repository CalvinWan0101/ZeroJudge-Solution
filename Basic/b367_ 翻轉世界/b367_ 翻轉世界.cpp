#include <iostream>
#include <string>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int count;
    int n;
    int y, x;
    cin >> n;
    int map[12][12] = {0};
    int orgin[12][12] = {0};
    for (int i = 0; i < n; i++)
    {
        cin >> y >> x;
        for (int i = 0; i < y; i++)
            for (int j = 0; j < x; j++)
            {
                cin >> map[i][j];
                orgin[i][j] = map[i][j];
            }
        int buffer;
        for (int i = 0; i < y; i++)
            for (int j = 0; j < x; j++)
            {
                buffer = map[i][j];
                map[i][j] = map[i][x - 1 - j];
                map[i][x - 1 - j] = buffer;
                if (x - 1 - j - j == 0 || x - 1 - j - j == 1)
                    break;
            }
        for (int i = 0; i < x; i++)
            for (int j = 0; j < y; j++)
            {
                buffer = map[j][i];
                map[j][i] = map[y - 1 - j][i];
                map[y - 1 - j][i] = buffer;
                if (y - 1 - j - j == 1 || y - 1 - j - j == 0)
                    break;
            }
        count = 0;
        for (int i = 0; i < y; i++)
            for (int j = 0; j < x; j++)
            {
                if (orgin[i][j] != map[i][j])
                    count = 1;
            }
        if (count == 0)
            cout << "go forward" << endl;
        else
            cout << "keep defending" << endl;
    }
    return 0;
}
