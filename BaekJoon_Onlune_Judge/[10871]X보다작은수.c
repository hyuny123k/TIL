#include <stdio.h>
#include <stdlib.h>

#pragma warning(disable:4996)
int main(int argc, char *argv[]) {
	int N;	// ���� ���� N
	int X;	// ���ذ� ���� X
	int i;
	
	int *array_n;

	scanf("%d %d", &N,&X);

	array_n = (int*)malloc(sizeof(int)*N);

	for (i = 0; i < N; i++) {
		scanf("%d", &array_n[i]);

		if (array_n[i] < X)
			printf("%d ", array_n[i]);
	}
	return 0;
}