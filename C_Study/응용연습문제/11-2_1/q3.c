#include <stdio.h>
#pragma warning (disable:4996)

void main() {
	char arr[100];
	int i=0;
//	int counter = 0;

	printf("입력받을 문자열: ");
	scanf("%s", arr);

	while (arr[i] != '\0') {
	//	counter++;
		i++;
	}
	printf("입력하신 문자의 길이는 %d 입니다", i);
}