#include <stdio.h>

#pragma warning(disable:4996)

int main(int argc, char *argv[]) {
	int N;	//º° °³¼ö
	int i, j, k;

	scanf("%d", &N);

	for (i = 0; i < N; i++) {
		for (j = 0; j < N - 1 - i; j++) {
			printf(" ");
		}
		for (k = N; k >= N - i; k--) {
			printf("*");
		}
		printf("\n");
	}	

	return 0;
}