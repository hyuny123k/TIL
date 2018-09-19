#include <stdio.h>
#include <stdlib.h>


#pragma warning(disable:4996)
int main(int argc, char *argv[]) {
	int N, M;
	int *array_N, *array_M, *result;
	int i, j, k = 0;

	scanf("%d", &N);
	array_N = (int*)malloc(sizeof(int)*N);
	for (i = 0; i < N; i++) {
		scanf("%d", &array_N[i]);
	}

	scanf("%d", &M);
	array_M = (int*)malloc(sizeof(int)*M);
	result = (int*)malloc(sizeof(int)*M);
	for (j = 0; j < M; j++) {
		scanf("%d", &array_M[j]);
	}

	//for (i = 0; i < M; i++) {
	//	for (j = 0; j < N; j++) {
	//		if (array_N[j] == array_M[i]) {
	//			result[i] = 1;
	//			break;
	//		}
	//		else
	//			result[i] = 0;
	//	}
	//}

	for (i = 0; i < M;) {
		if (k != (M - 1)&&(k<N)){
			if (array_M[i] == array_N[k]) {
				result[i] = 1;
				i++;
				k = 0;
			}
			else {
				result[i] = 0;
				k++;
			}
		}
		else {
			i++;
			k = 0;
		}
	}

	for (i = 0; i < M; i++)
		printf("%d ", result[i]);
	free(array_M);
	free(array_N);
	free(result);
	return 0;
}