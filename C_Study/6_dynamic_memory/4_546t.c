#include <stdio.h>
#include <stdlib.h>
#pragma warning (disable:4996)

void main() {
	int input_number;
	int i;
	int total = 0;
	int* ptr;

	printf("전체 입력개수를 설정하세요: ");
	scanf("%d", &input_number);

//	int* ptr = (int *)malloc(sizeof(int) * input_number);
	ptr = (int *)malloc(sizeof(int) * input_number);
	
	for (i = 0; i < input_number; i++) {
		printf("%d] 수를 입력하세요: ", i+1);
		scanf("%d", &ptr[i]);
		total = total + ptr[i];
	}

	for (i = 0; i < input_number; i++) {
		printf("입력%d] %d\n", i+1, ptr[i]);
	}
	printf("총합: %d", total);

	free(ptr);
}
