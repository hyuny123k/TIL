#include <stdio.h>
#include <stdlib.h>

#pragma warning(disable:4996)

int main(int argc, char *argv[]) {
	int N;	// ���� ��
	int i;
	int *score;	// ���� ����
	int M = 0;	//���� ���� �ִ밪
	float score_sum = 0; //���� ����
	float avg = 0;	// ���

	scanf("%d", &N);

	score = (int*)malloc(sizeof(int)*N);

	for (i = 0; i < N; i++) {
		scanf("%d", &score[i]);
		score_sum += score[i];
		if (M < score[i])
			M = score[i];
	}

	avg =((score_sum / M) * 100) / N;	// ���ο� ���!
	printf("%.2f", avg);
	
	return 0;
}