#include <stdio.h>
#include <string.h>
#pragma warning (disable:4996)

void main() {
	FILE* fi = fopen("obama_speech.txt", "rt");
	char str[20];
	char str2[20];
	int index = 0;
	int a = 0;
	int p = 0;

	while (1) {
		fscanf(fi, "%s", str);
		if (str[0] == 'a') {
			a++;
		}
		else if (str[0] == 'p') {
			p++;
		}
		if (!strcmp(str, str2)) {
			break;
		}
		strcpy(str2, str);
	}
	printf("a단어수: %d\n", a);
	printf("p단어수: %d", p);
}