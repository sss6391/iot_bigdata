#include <stdio.h>
#pragma warning (disable:4996)
#define CHAR_COUNT 3

void main() {
	int ch, i;
	
	FILE* fp = fopen("data.txt", "a+t");
	if (fp == NULL) {
		puts("���Ͽ��� ����!");
	}

	for (i = 0; i < CHAR_COUNT; i++) {
		ch = fgetc(fp);
		printf("%c", ch);
	}

	fputc('A', fp);
	fputc('B', fp);
	fputc('C', fp);	
	fclose(fp);
}