#include <stdio.h>
#pragma warning (disable:4996)

void main() {
	char* str = "Simple String";

	printf("1. put test ----- \n");
	puts(str);
	puts("So Simple String");

	printf("\n2. fput test ----- \n");
	//fputs(str, stdout); printf("\n");
	fputs(str, stdout); putchar('\n');
	//fputs("So Simple String", stdout); printf("\n");
	fputs("So Simple String", stdout); putchar('\n');

	printf("\n3.end of main ---- \n");
}