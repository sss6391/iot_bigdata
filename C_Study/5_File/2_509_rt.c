#include <stdio.h>
#pragma warning (disable:4996)

void main() {	
	int ch, i;

//	FILE* fp = fopen("data.txt", "rt");
	FILE* fp = fopen("no_file.txt", "rt");
	if (fp == NULL) {
		puts("���Ͽ��� ����!");
		return;
	}
	for (i = 0; i < 3; i++) {
		ch = fgetc(fp);
		printf("%c \n", ch);
	}
	fclose(fp);
}
