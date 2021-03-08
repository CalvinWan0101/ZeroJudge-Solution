#include <iostream>
using namespace std;
int main()
{
	int in, score;
	while (cin >> in)
	{
		if (in <= 10)
			score = in * 6;
		else if (in <= 20)
			score = 60 + (in - 10) * 2;
		else if (in <= 40)
			score = 60 + 20 + (in - 20) * 1;
		else
			score = 100;
		cout << score << '\n';
	}
}
