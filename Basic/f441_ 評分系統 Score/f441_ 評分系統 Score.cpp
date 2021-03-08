#include <iostream>
using namespace std;
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	int number, score, student, count, right[20], wrong[20];
	cin >> number >> score;
	for (int i = 0; i < number; i++)
		cin >> right[i];
	cin >> student;
	for (int i = 0; i < student; i++)
	{
		count = 0;
		for (int j = 0; j < number; j++)
		{
			cin >> wrong[j];
			if (right[j] == wrong[j])
				count += score;
		}
		cout << count << endl;
	}
	return 0;
}
