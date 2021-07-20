#include <iostream>
#include <string>
using namespace std;
int main()
{
    int n, a, b;
    string answer, input;
    cin >> answer >> n;
    for (int k = 0; k < n; k++)
    {
        a = 0, b = 0;
        cin >> input;
        for (int i = 0; i < answer.length(); i++)
            for (int j = 0; j < answer.length(); j++)
                if (answer[i] == input[j] && i != j)
                    b++;
                else if (answer[i] == input[j] && i == j)
                    a++;
        cout << a << "A" << b << "B" << endl;
    }
    return 0;
}
