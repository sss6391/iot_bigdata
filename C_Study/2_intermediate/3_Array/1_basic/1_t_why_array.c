#include <stdio.h>
#pragma warning (disable:4996)

void main() {
	int number1, number2, number3, number4, number5, total, average;
	
	printf("ù ��° ���ڸ� �Է��ϼ���: ");
	scanf("%d", &number1);

	printf("�� ��° ���ڸ� �Է��ϼ���: ");
	scanf("%d", &number2);

	printf("�� ��° ���ڸ� �Է��ϼ���: ");
	scanf("%d", &number3);

	printf("�� ��° ���ڸ� �Է��ϼ���: ");
	scanf("%d", &number4);

	printf("�ټ� ��° ���ڸ� �Է��ϼ���: ");
	scanf("%d", &number5);

	printf("�Է��� ����(�Է� ������� ����): %d %d %d %d %d\n",
					   					number1, number2, number3, number4, number5);
	total =  number1+number2+number3+number4+number5;
	average= total/5;
	printf("����: %d, ���: %d\n", total, average);

	printf("�� ��° ���ڴ� %d �Դϴ�.", number3);
}
