#include <iostream>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    string a;
    long long int n, count;
    while (cin >> a >> n)
    {
        if (a == "Monday")
            count = 1;
        else if (a == "Tuesday")
            count = 2;
        else if (a == "Wednesday")
            count = 3;
        else if (a == "Thursday")
            count = 4;
        else if (a == "Friday")
            count = 5;
        else if (a == "Saturday")
            count = 6;
        else if (a == "Sunday")
            count = 7;
        count += n;
        while (count < 0)
            count += 7;
        count %= 7;
        switch (count)
        {
        case 0:
            cout << "Sunday" << endl;
            break;
        case 1:
            cout << "Monday" << endl;
            break;
        case 2:
            cout << "Tuesday" << endl;
            break;
        case 3:
            cout << "Wednesday" << endl;
            break;
        case 4:
            cout << "Thursday" << endl;
            break;
        case 5:
            cout << "Friday" << endl;
            break;
        case 6:
            cout << "Saturday" << endl;
            break;
        }
    }
    return 0;
}
