#include <stdio.h>
#pragma warning (disable:4996)

void main() {
	
	// a���������� ���� ��쿡�� ���� ������ �ϰ� 	
	// ������ ������ �ִ� ��쿡�� ������ ���� ���ٿ� ���⸦ �Ѵ�.

	FILE* fp = fopen("data.txt", "at");
	if (fp == NULL) {
		puts("���Ͽ��� ����!");
	}

	fputc('D', fp);
	fputc('E', fp);
	fputc('F', fp);	
	if (fclose(fp) == EOF) {
		puts("���� close ����!");
	}
}