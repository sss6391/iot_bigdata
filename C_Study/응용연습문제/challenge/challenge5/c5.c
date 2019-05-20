#include <stdio.h>
#pragma warning (disable:4996)

void main() {
	int number = 0;
	int divide_number = 0;
	int limit = 0;
	int count = 0;
	int input_max = 0;

	printf("¼Ò¼öÀÇ °¹¼ö: ");
	scanf("%d", &input_max);

	while(limit < input_max){
		count = 0;
		number++;
		for (divide_number = 1 ; divide_number < number ; divide_number++) {
			if (number % divide_number == 0) {
				count++;
			}
		}
		if (count == 1) {
			printf("%d ", number);
			limit++;
		}
	}
}