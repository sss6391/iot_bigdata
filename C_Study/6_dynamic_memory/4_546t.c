#include <stdio.h>
#include <stdlib.h>
#pragma warning (disable:4996)

void main() {
	int input_number;
	int i;
	int total = 0;
	int* ptr;

	printf("��ü �Է°����� �����ϼ���: ");
	scanf("%d", &input_number);

//	int* ptr = (int *)malloc(sizeof(int) * input_number);
	ptr = (int *)malloc(sizeof(int) * input_number);
	
	for (i = 0; i < input_number; i++) {
		printf("%d] ���� �Է��ϼ���: ", i+1);
		scanf("%d", &ptr[i]);
		total = total + ptr[i];
	}

	for (i = 0; i < input_number; i++) {
		printf("�Է�%d] %d\n", i+1, ptr[i]);
	}
	printf("����: %d", total);

	free(ptr);
}
