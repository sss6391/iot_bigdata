#include <stdio.h>
#include <string.h>
#pragma warning (disable:4996)

void main() {
	char string[10];
	int index;
	int total=0;
	int len;
	int number;

	printf("문자열 입력: ");
	scanf("%s", string);

	len = strlen(string);
	
	for (index = 0; index < len;index++) {
		if (48 < string[index] && string[index] < 58) {
			total = total + (string[index] - 48);
		}
	}
	printf("총 합 %d", total);
}
