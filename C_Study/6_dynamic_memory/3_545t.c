#include <stdio.h>
#include <stdlib.h>
#pragma warning (disable:4996)

void main() {
	int num1;
	int* ptr1 = &num1;
	void* ptr2 = malloc(sizeof(int));
	int* ptr3 = (int *)malloc(sizeof(int));
	

	*ptr1 = 10;

	printf("ptr1= %d\n", *ptr1);

	// void���� int���� �Ҵ��Ϸ��� �߱� ������ ���� �߻�
//	*ptr2 = 10;

	*ptr3 = 12;
	printf("ptr3= %d\n", *ptr3);

}
