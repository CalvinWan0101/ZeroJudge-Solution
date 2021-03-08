#include <iostream>
#include <string>
using namespace std;
int main()
{
	int bucket[27] = { 0 };
	string input;
	while (cin >> input)
	{
		for (int i = 0; i < 27; i++)
			bucket[i] = 0;
		for (int i = 0; i < input.length(); i++)
			if (input[i] >= 65 && input[i] <= 90 || input[i] >= 97 && input[i] <= 122)
				if (input[i] >= 65 && input[i] <= 90)
					bucket[input[i] - 64]++;
				else if (input[i] >= 97 && input[i] <= 122)
					bucket[input[i] - 96]++;
		int count = 0;
		for (int i = 1; i <= 26; i++)
			if (bucket[i] % 2 != 0)
				count++;
		if (count >= 2)
			cout << "no..." << '\n';
		else
			cout << "yes !" << '\n';
	}
}
