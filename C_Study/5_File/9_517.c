#include <stdio.h>
#pragma warning (disable:4996)

void main() {
	FILE* src = fopen("scr.txt", "rt");
	FILE* des = fopen("des.txt", "wt");
	int ch;

	if (des == NULL || src == NULL) {
		puts("파일오픈 실패!");
	}

	while ((ch = fgetc(src)) != EOF) {
		fputc(ch, des);
	}
	if (feof(src) != 0) {
		puts("파일복사 완료!");
	}else {
		puts("파일복사 실패!");

	}
	
	fclose(src);
	fclose(des);
}
