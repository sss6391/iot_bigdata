#include <stdio.h>
#pragma warning (disable:4996)

void main() {
	char arr[100];
	int i=0;
//	int counter = 0;

	printf("�Է¹��� ���ڿ�: ");
	scanf("%s", arr);

	while (arr[i] != '\0') {
	//	counter++;
		i++;
	}
	printf("�Է��Ͻ� ������ ���̴� %d �Դϴ�", i);
}