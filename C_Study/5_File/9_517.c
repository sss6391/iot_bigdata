#include <stdio.h>
#pragma warning (disable:4996)

void main() {
	FILE* src = fopen("scr.txt", "rt");
	FILE* des = fopen("des.txt", "wt");
	int ch;

	if (des == NULL || src == NULL) {
		puts("���Ͽ��� ����!");
	}

	while ((ch = fgetc(src)) != EOF) {
		fputc(ch, des);
	}
	if (feof(src) != 0) {
		puts("���Ϻ��� �Ϸ�!");
	}else {
		puts("���Ϻ��� ����!");

	}
	
	fclose(src);
	fclose(des);
}
