#include <stdio.h>

void main(){
	int result1, result2;
	int num1, num2;

	printf("�� ���� �����Է�: ");
	scanf("%d %d", &num1, &num2);

	result1= num1/num2;
	result2= num1%num2;
	printf("%d / %d\n��: %d\n������: %d", num1, num2, result1, result2);
}
