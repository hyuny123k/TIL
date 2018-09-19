#include <stdio.h>

#pragma warning(disable : 4996)

int main(int argc, char *argv[])
{
	int N; // ¼³ÅÁ N kg
	int i;

	int min_result; //¼³ÅÁºÀÁö ÃÖ¼Ò°ª

	scanf("%d", &N);

	if (N <= 12)
	{
		if (N % 3 == 0)
		{
			min_result = N / 3;
		}
		else if (N % 5 == 0)
		{
			min_result = N / 5;
		}
		else
		{
			for (i = 1; i * 3 < N; i++)
			{
				if (((N - (i * 3)) % 5) == 0)
				{
					min_result = i + ((N - (i * 3)) / 5);
					break;
				}
				else
					min_result = -1;
			}
		}
	}
	else if (N > 12)
	{
		if (N % 15 == 0)
		{
			min_result = N / 5;
		}
		else if ((N % 5 == 0) && (N % 3 != 0))
		{
			min_result = N / 5;
		}
		else
		{
			for (i = 1; i * 3 < N; i++)
			{
				if (((N - (i * 3)) % 5) == 0)
				{
					min_result = i + ((N - (i * 3)) / 5);
					break;
				}
				else
					min_result = -1;
			}
		}
	}

	printf("%d\n", min_result);

	return 0;
}