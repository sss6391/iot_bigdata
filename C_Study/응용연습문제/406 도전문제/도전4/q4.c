#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#pragma warning (disable:4996)

void main() {
	int dice_number;
	int counter;

	srand((int)time(NULL));

	dice_number = (rand() % 10) % 6;
	printf("�ֻ��� 1�� ��� %d \n", dice_number + 1);
	dice_number = (rand() % 10) % 6;
	printf("�ֻ��� 2�� ��� %d \n", dice_number + 1);

	/*while (1) {
		dice_number = rand()%10;
		if (dice_number < 6) {
			printf("�ֻ��� 1�� ��� %d \n", dice_number+1);
			break;		
		}
	}	
	while (1) {
		dice_number = rand()%10;
		if (dice_number < 6) {
			printf("�ֻ��� 2�� ��� %d \n", dice_number+1);
			break;
		}
	}
	*/
}