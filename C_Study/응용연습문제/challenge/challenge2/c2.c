#include <stdio.h>
#pragma warning (disable:4996)

void times_print(int number1, int number2) {
	int big_number=0;
	int small_number=0;
	int multiplication=0;
	int result=0;

	if (number1 > number2) {
		big_number = number1;
		small_number = number2;
	}else {
		big_number = number2;
		small_number = number1;
	}
	
	for (; small_number <= big_number; small_number++) {
		printf("\n===== %d 단 =====\n", small_number);

		for (multiplication = 1; multiplication < 10; multiplication++) {
			result = small_number * multiplication;
			printf("%d * %d = %d\n", small_number, multiplication, result);
		}
	}

}

void main() {
	int input_number1;
	int input_number2;

	printf("구구단 두 정수를 입력하세요: ");
	scanf("%d %d", &input_number1, &input_number2);
	times_print(input_number1, input_number2);
}