#include <stdio.h>
#include <stdlib.h>
#pragma warning (disable:4996)

void execute_dynamic_malloc(){
	int input_number;
	int i;
	int total = 0;
	int* ptr;
	
	printf("��ü �Է°����� �����ϼ���: ");
	scanf("%d", &input_number);
	
	ptr = (int*)malloc(sizeof(int) * input_number);

	for (i = 0; i < input_number; i++) {
		printf("%d] ���� �Է��ϼ���: ", i + 1);
		scanf("%d", &ptr[i]);
		total = total + ptr[i];
	}

	for (i = 0; i < input_number; i++) {
		printf("�Է�%d] %d\n", i + 1, ptr[i]);
	}
	printf("����: %d\n", total);

//	free(ptr);

	// ptr �� ���� �޸� ��ȯ�� ���� �ʴ´ٸ� �Ҵ�Ǿ��� �޸𸮴�
	// ���������� ������ �Ұ����� �޸� �������� ���� �ȴ�.
	// �̷��� ������ memory leak�̶�� �Ѵ�.
	// ���� �Ҵ�� �޸𸮴� �ݵ�� ���α׷� ���� ���� free�ؾ� �Ѵ�.
}

void main() {
	int menu;

	while (1) {
		puts("���� �޸� �Ҵ��� ü���սô�.");
		puts("1. ���� ����");
		puts("2. ����");
		printf("�޴��� �����ϼ���: ");
		scanf("%d", &menu);

		switch (menu) {
		case 1:
			execute_dynamic_malloc();
			break;
		case 2:
			return;
		default:
			puts("1, 2 �޴��� �����ϼ���.");
		}
	}
}
