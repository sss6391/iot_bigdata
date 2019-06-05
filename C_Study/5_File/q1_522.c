#include <stdio.h>
#pragma warning (disable:4996)
	
void main() {
	FILE* fp = fopen("mystory.txt", "wt");
	fputs("#이름: 윤성우\n", fp);
	fputs("#주민번호: 900208-1012589\n", fp);
	fputs("#전화번호: 010-1111-2222", fp);
	fclose(fp);
}