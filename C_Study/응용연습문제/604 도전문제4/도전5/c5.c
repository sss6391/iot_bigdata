#include <stdio.h>
#include <string.h>
#pragma warning (disable:4996)

void main() {
	FILE* f1 = fopen("obama_speech.txt", "rt");
	FILE* f2 = fopen("obama_speech2.txt", "rt");
	
	char str1[100];
	char str2[100];

	while (fgets(str1, sizeof(str1), f1) != NULL && fgets(str2, sizeof(str2), f2) != NULL) {
		if (!strcmp(str1, str2)) {
			continue;
		}
		else {
			printf("두 문서는 다릅니다");
			return;
		}
	}
	printf("두 문서는 동일합니다");
}