#include <stdio.h>
#pragma warning (disable:4996)
void is_palindrome(char* arr, int size);

void main() {
	char string[50];
	int counter=0;

	printf("�Է¹��� ���ڿ�: ");
	scanf("%s", string);

	while (string[counter] != '\0') {
		counter++;
	}
	is_palindrome(string, counter);
}

void is_palindrome(char* arr, int size) {
	int index;

	for (index = 0; index <= size / 2; index++) {
		if (index >= size / 2) {
			printf("ȸ�� �Դϴ�");
		}
		if (arr[index] == arr[(size - index - 1)]) {
			continue;
		}else {
			printf("ȸ���� �ƴմϴ�");
			return;
		}
	}
}
