#include <stdio.h>
#pragma warning (disable:4996)

void main() {

	FILE* fp = fopen("simple.txt", "wt");
	if (fp == NULL) {
		puts("파일오픈 실패!");
	}

	fputc('A', fp);
	fputc('B', fp);
	fputs("MY name is Son \n", fp);
	fputs("Your name is Yoon \n", fp);
	fclose(fp);
}
