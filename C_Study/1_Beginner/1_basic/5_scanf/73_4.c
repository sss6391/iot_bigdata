#include <stdio.h>

void main(){
	int result1, result2;
	int num1, num2;

	printf("두 개의 정수입력: ");
	scanf("%d %d", &num1, &num2);

	result1= num1/num2;
	result2= num1%num2;
	printf("%d / %d\n몫: %d\n나머지: %d", num1, num2, result1, result2);
}
