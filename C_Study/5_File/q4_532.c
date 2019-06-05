#include <stdio.h>
#pragma warning (disable:4996)
	
void main() {
	FILE* fp = fopen("mystory.txt", "rt");
	char str[20];

	while (fgets(str, sizeof(str), fp) != NULL) {
		printf("%s", str);
	}
	fclose(fp);
}