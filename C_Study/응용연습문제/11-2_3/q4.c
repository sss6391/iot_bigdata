#include <stdio.h>
#pragma warning (disable:4996)

void main() {

	char arr[30];
	int i=0;
//	int counter=0;

	printf("�Է¹��� ���ڿ�: ");
	scanf("%s", arr);

	while (arr[i] != '\0') {
//		counter++;
		i++;
	}

	while (1) {
		printf("%c", arr[i-1]);
		i--;
		if (i < 1) {
			break;
		}
	}
}