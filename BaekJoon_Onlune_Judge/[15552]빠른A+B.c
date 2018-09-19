#include <stdio.h>
#include <stdlib.h>

#pragma warning(disable:4996)

int main(int argc, char *argv[]) {
	int N;	// Testcase
	int i;
	int *a, *b;
	int *result;

	scanf("%d", &N);

	a = (int*)malloc(sizeof(int)*N);
	b = (int*)malloc(sizeof(int)*N);
	result = (int*)malloc(sizeof(int)*N);

	for (i = 0; i < N; i++) {
        scanf("%d %d", &a[i], &b[i]);
		result[i] = a[i] + b[i];
	}

	for (i = 0; i < N; i++) {
		printf("%d\n", result[i]);
	}
	free(a);
	free(b);
	free(result);
	return 0;
}