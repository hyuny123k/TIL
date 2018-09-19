#include <stdio.h>

#pragma warning(disable:4996)

int main(int argc, char *argv[]) {
	int N;
	int i, j, k;

	scanf("%d", &N);

	for (i = 0; i < N; i++) {
		for (k = N; k > N - i; k--)
			printf(" ");
		for (j = N; j > i; j--)
			printf("*");
		printf("\n");
	}
	return 0;
}