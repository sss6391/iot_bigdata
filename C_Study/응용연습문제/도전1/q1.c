#include <stdio.h>
#pragma warning (disable:4996)

void print_even(int * ptr, int length);
void print_odd(int * ptr, int length);

void print_even(int * ptr, int length){
	int index;

	printf("¦�� ���: ");
	for (index = 0; index < length; index++) {
		if ( ptr[index] % 2 == 0) {
			printf("%d ", ptr[index]);
		}
	}
}

void print_odd(int* ptr, int length) {
	int index;

	printf("Ȧ�� ���: ");
	for (index = 0; index < length; index++) {
		if (ptr[index] % 2 != 0) {
			printf("%d ", ptr[index]);
		}
	}
}

void main() {
	int array10[10];
	int index;
	
	for (index = 0; index < sizeof(array10)/ sizeof(int); index++) {
		printf("�Է�: ");
		scanf("%d", &array10[index]);
	}
	print_odd(array10, sizeof(array10)/ sizeof(int));
	printf("\n");
	print_even(array10, sizeof(array10)/ sizeof(int));
}