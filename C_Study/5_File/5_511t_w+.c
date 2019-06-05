#include <stdio.h>
#pragma warning (disable:4996)
#define CHAR_COUNT 9

void main() {
	int ch, i;

	FILE* fp = fopen("data.txt", "w+t");
	if (fp == NULL) {
		puts("파일오픈 실패!");
	}

	for (i = 0; i < CHAR_COUNT; i++) {
		ch = fgetc(fp);
		printf("%c", ch);
	}

	fputc('1', fp);
	fputc('2', fp);
	fputc('3', fp);	
	fclose(fp);
}
