#include <stdio.h>
#include <string.h>
#pragma warning (disable:4996)
long GetFileSize(FILE* fp);

void main() {
	char str[100];
	FILE* fp = fopen("mystory.txt", "rt");
	
	fgets(str, 100, fp);
	fputs(str, stdout);
	printf("\n파일의 크기: %ld\n\n", GetFileSize(fp));
	fgets(str, 100, fp);
	fputs(str, stdout);
	printf("\n파일의 크기: %ld\n\n", GetFileSize(fp));
	fgets(str, 100, fp);
	fputs(str, stdout);
	fclose(fp);
}

long GetFileSize(FILE* fp) {
	long fpos;
	long fsize;
	fpos = ftell(fp);

	fseek(fp, 0, SEEK_END);
	fsize = ftell(fp);
	fseek(fp, fpos, SEEK_SET);
	return fsize;
}