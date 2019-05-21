#include <stdio.h>
#pragma warning (disable:4996)

void main() {

	char string[50];
	int index=0;
	int counter=0;
	int temporary;

	printf("입력받을 문자열: ");
	scanf("%s", string);

	while (string[counter] != '\0') {
		counter++;
	}

	for (index = 0; index < counter/2; index++) {
		temporary = string[index];
		string[index] = string[counter - index - 1];
		string[counter - index - 1] = temporary;
	}

	for (index = 0; index < counter; index++) {
		printf("%c", string[index]);
	}
}