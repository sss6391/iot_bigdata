#include <stdio.h>
#pragma warning (disable:4996)
	
void main() {
	FILE* fp = fopen("mystory.txt", "wt");
	fputs("#�̸�: ������\n", fp);
	fputs("#�ֹι�ȣ: 900208-1012589\n", fp);
	fputs("#��ȭ��ȣ: 010-1111-2222", fp);
	fclose(fp);
}