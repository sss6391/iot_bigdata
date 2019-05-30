#include <stdio.h>
#pragma warning (disable:4996)

void main() {
	int ch1, ch2;
	char my_str[100];

	printf("문자열을 입력하세요: ");
	scanf("%s", my_str);
	printf("%s", my_str);
	printf("\n출력완료");

	/*
	ch1 = getchar();
	ch2 = fgetc(stdin);

	putchar(ch1);
	fputc(ch2, stdout);*/
}