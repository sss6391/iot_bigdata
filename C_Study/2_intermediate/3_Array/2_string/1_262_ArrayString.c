#include <stdio.h>
#pragma warning (disable:4996)

void main() {

	// ���ڿ��� ""�ȿ� ���Ǹ� �Ѵ�.
	// �׷� �������� �ڵ����� NULL ���� �߰��� �ȴ�.
	
	char str[] = "Good morning!";

	// char�� 1byte
	// G ~ ! 13���� ���� 13byte
	// ���⿡ NULL �߰� �Ǿ 14byte
	printf("�迭 str�� ũ��: %d\n", sizeof(str));
	printf("�� ���� ������ ���: %c\n", str[13]);
	printf("�� ���� ������ ���: %d\n", str[13]);

	str[12]='?';
	printf("���ڿ� ���: %s\n", str);



}
