#include <stdio.h>

#pragma warning(disable:4996)

int main(int argc, char *argv[]) {
	int N;	//º° °³¼ö
	int i, j;

	scanf("%d", &N);

	for (i = 1; i <= N; i++) {
		for (j = N; j > N - i; j--) {
			printf("*");
		}
		printf("\n");
	}
	

}