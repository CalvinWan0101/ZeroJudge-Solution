#include <iostream>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    char Balp[27] = {'0', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
    char Salp[27] = {'0', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
    string a;
    int count;
    int buffer;
    int error;
    while (cin >> a)
    {
        error = 0;
        if (a[0] == '0' && a.length() == 1)
            break;
        count = 0;
        for (int i = 0; i < a.length(); i++)
        {
            buffer = count;
            for (int j = 1; j <= 26; j++)
                if (a[i] == Balp[j])
                    count += j;
            for (int j = 1; j <= 26; j++)
                if (a[i] == Salp[j])
                    count += j;
            if (count == buffer)
                error = 1;
        }
        if (error == 0)
            cout << count << endl;
        else
            cout << "Fail" << endl;
    }
    return 0;
}
