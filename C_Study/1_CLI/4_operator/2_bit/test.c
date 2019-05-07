#include <stdio.h>

void main(){
	int number1 = 4;
	int number_left_2shift= number1 << 2;
	int number_left_1shift= number1 << 1;
	int result = number1 * number_left_2shift / number_left_1shift;
	printf("%d * %d / %d = %d", number1, number_left_2shift, number_left_1shift, result);
}
