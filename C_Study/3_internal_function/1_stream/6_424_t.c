#include <stdio.h>
#pragma warning (disable:4996)

void main() {
	char* line1 = "Dear Dean, \n";
	char* line2 = "Hello my friend!\n";
	char* line3 = "Long time no see\n";

	printf("fput test ----- \n");
	printf("FILE 10�� ���� �� ������Ƿ� line1~3�� �о�Դٰ� ����\n");
	fputs(line1, stdout); putchar('\n');
	fputs(line2, stdout); putchar('\n');
	fputs(line3, stdout); putchar('\n');
}