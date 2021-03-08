#include<cstdio>
using namespace std;
int main() {
	int answer[4], input[4], array[4], n, a, b, tb[4], inb[4];
	while (scanf("%d %d %d %d", &answer[0], &answer[1], &answer[2], &answer[3]) == 4)
	{
		scanf("%d", &n);
		for (int i = 0; i < n; i++)
		{
			a = b = 0;
			for (int j = 0; j < 4; j++)
			{
				tb[j] = 0;
				inb[j] = 0;
				scanf("%d", &input[j]);
				if (answer[j] == input[j])
				{
					array[j] = 1;
					a++;
				}
				else
					array[j] = 0;
			}
			for (int j = 0; j < 4; j++)
				for (int k = 0; k < 4; k++)
					if ((j != k) && (!array[j]) && (!array[k]) && (!tb[j]) && (!inb[k]))
						if (answer[j] == input[k])
						{
							b++;
							tb[j] = 1;
							inb[k] = 1;
							break;
						}
			printf("%dA%dB\n", a, b);
		}
	}
	return 0;
}
