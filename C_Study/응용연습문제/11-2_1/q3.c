#include <stdio.h>
#pragma warning (disable:4996)

void main() {
	char arr[100];
	int index=0;
//	int counter = 0;

	printf("�Է¹��� ���ڿ�: ");
	scanf("%s", arr);

	while (arr[index] != '\0') {
	//	counter++;
		index++;
	}
	printf("�Է��Ͻ� ������ ���̴� %d �Դϴ�", index);
}