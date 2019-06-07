#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#pragma warning (disable:4996)

void main() {
	int index;
	char* str;
	int len;
	int max_len;

	printf("문자열 크기: ");
	scanf("%d", &len);
	getchar();
	
	str = (char*)malloc(sizeof(char) * len);

	printf("문자 입력: ");
	fgets(str, len + 1, stdin);

	max_len = strlen(str);
	str[max_len - 1] = 0;

	for (index = max_len; index > 0; index--) {
		if (str[index] == ' ') {
			printf("%s ", &str[index + 1]);
			str[index] = 0;
		}
	}
		
	printf("%s", &str[0]);
	free(str);
}
