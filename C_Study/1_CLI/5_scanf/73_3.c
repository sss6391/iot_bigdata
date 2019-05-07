#include <stdio.h>

void main(){
	int result;
	int num1;

	printf("하나의 정수입력: ");
	scanf("%d", &num1);

	result= num1*num1;

	printf("%d^2 = %d\n", num1, result);
}
