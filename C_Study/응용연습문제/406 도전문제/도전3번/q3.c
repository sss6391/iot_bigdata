#include <stdio.h>
#include <stdlib.h>
#pragma warning (disable:4996)

void main() {
	int counter;
	int random_number;

	printf("������ ����: 0���� %d���� \n", RAND_MAX);
	for (counter = 0; counter < 5;) {
		printf("������ ���: %d \n", rand() % 100);
		counter++;
		
	}
}