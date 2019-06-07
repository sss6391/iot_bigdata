#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#pragma warning (disable:4996)

void main() {
	int* number;
	int index=0;
	int max_number=5;
	int input_number;

	number = (int*)malloc(sizeof(int) * max_number);

	while (1) {
		printf("입력 (종료: -1) : ");
		scanf("%d", &input_number);
		
		if (input_number == -1) {
			break;
		}
		if (index == max_number) {
			max_number = max_number + 3;
			number = (int*)realloc(number,sizeof(int) * max_number);
		}
		number[index] = input_number;
		index++;
	}

	for (index = 0; index < max_number-2; index++) {
		printf("%d ", number[index]);
	}
	free(number);
}
