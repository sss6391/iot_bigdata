#include <stdio.h>
#pragma warning (disable:4996)

void main() {

	// w���������� ���� ��쿡�� ���� ������ �ϰ� 
	// ������ ������ �ִ� ��쿡�� �ش������� ������ ��� �ʱ�ȭ
	// �ʱ�ȭ�� ���¿��� ���� �ۼ��� ������ overwrite �Ѵ�.

	FILE* fp = fopen("data.txt", "wt");
	if (fp == NULL) {
		puts("���Ͽ��� ����!");
	}

	fputc('A', fp);
	fputc('B', fp);
	fputc('C', fp);
//	fputc('D', fp);
//	fclose(fp);
	if (fclose(fp) == EOF) {
		puts("���� close ����!");
	}

}
