// ���� 73
#include <stdio.h>

void main(){
	int result;
	int num1, num2, num3;

	printf("�� ���� �����Է�: ");
	// ������ �Է� ������ �Էµ��� �����ڴ� ���鹮���̴�.
	// ������(separator, delimiter)
	scanf("%d %d %d", &num1, &num2, &num3);

	result= num1+num2+num3;

	printf("%d + %d + %d = %d\n", num1, num2, num3, result);
}
