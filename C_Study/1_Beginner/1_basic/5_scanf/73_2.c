#include <stdio.h>

void main(){
	int result;
	int num1, num2, num3;

	printf("세 개의 정수입력: ");
	scanf("%d %d %d", &num1, &num2, &num3);

	result= num1*num2+num3;

	printf("%d * %d + %d = %d\n", num1, num2, num3, result);
}
