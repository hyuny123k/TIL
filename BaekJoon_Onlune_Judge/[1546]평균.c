#include <stdio.h>
#include <stdlib.h>

#pragma warning(disable:4996)

int main(int argc, char *argv[]) {
	int N;	// 과목 수
	int i;
	int *score;	// 과목 점수
	int M = 0;	//과목 점수 최대값
	float score_sum = 0; //과목 총점
	float avg = 0;	// 평균

	scanf("%d", &N);

	score = (int*)malloc(sizeof(int)*N);

	for (i = 0; i < N; i++) {
		scanf("%d", &score[i]);
		score_sum += score[i];
		if (M < score[i])
			M = score[i];
	}

	avg =((score_sum / M) * 100) / N;	// 새로운 평균!
	printf("%.2f", avg);
	
	return 0;
}