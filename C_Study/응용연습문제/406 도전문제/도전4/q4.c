#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#pragma warning (disable:4996)

void main() {
	int dice_number;
	int index;

	srand((int)time(NULL));

	for (index = 0; index < 2; index++) {
		printf("�ֻ��� %d�� ��� %d \n", index+1, (rand() % 6) + 1);
	}
}