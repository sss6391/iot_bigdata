#include <stdio.h>
#pragma warning (disable:4996)
	
void main() {
	FILE* fp = fopen("mystory.txt", "at");
	fputs("\n#��ܸԴ� ����: «��, ������\n", fp);
	fputs("#���: �౸\n", fp);
	fclose(fp);
}