#include <stdio.h>
#include <stdlib.h>

#pragma warning(disable:4996)
int main(int argc, char *argv[]) {
	int N;
	int *array_n;
	int i;
	int result = 0;

	scanf("%d", &N);

	array_n = (int*)malloc(sizeof(int)*N);

	for (i = 0; i < N; i++) {
		scanf("%1d", &array_n[i]);
		result = result + array_n[i];
	}	
	printf("%d", result);
	return 0;
}