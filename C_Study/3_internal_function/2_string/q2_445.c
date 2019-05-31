#include <stdio.h>
#include <string.h>
#pragma warning (disable:4996)

void Remover(char *arr, int len);

void Remover(char *arr, int len) {
	arr[len - 1] = 0;
}

void main() {
	char string1[20];
	char string2[20];
	char string3[40];

	printf("첫 번째 문자열 입력: ");
	fgets(string1, sizeof(string1), stdin);
	printf("두 번째 문자열 입력: ");
	fgets(string2, sizeof(string2), stdin);

	Remover(string1, strlen(string1));
	Remover(string2, strlen(string2));
	strcpy(string3, string1);
	strcat(string3, string2);

	printf("%s", string3);
}
