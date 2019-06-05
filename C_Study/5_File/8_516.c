#include <stdio.h>
#pragma warning (disable:4996)

void main() {
	char str[30];
	int ch;
	FILE* fp = fopen("simple.txt", "rt");
	if (fp == NULL) {
		puts("파일오픈 실패!");
	}
	
	printf("%c \n", fgetc(fp));
	printf("%c \n", fgetc(fp));
	
	printf("%s", fgets(str, sizeof(str), fp));
	printf("%s", fgets(str, sizeof(str), fp));
	
	/*
	ch = fgetc(fp);
	printf("%c \n", ch);
	ch = fgetc(fp);
	printf("%c \n", ch);

	fgets(str, sizeof(str), fp);
	printf("%s", str);
	fgets(str, sizeof(str), fp);
	printf("%s", str);
	fclose(fp);*/
}
