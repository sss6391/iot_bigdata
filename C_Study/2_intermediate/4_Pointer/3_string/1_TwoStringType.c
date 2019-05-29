#include <stdio.h>
#pragma warning (disable:4996)

void main() {
	char str1[]="My string";
	char *str2="Your string";
	printf("%s %s \n", str1, str2);

	str2="Our String";
	printf("%s %s \n", str1, str2);

	str1[0]='X';
	str2[0]='X';
	printf("%s %s \n", str1, str2);
}
