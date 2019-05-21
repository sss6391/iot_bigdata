#include <stdio.h>
#pragma warning (disable:4996)

void main() {

	char arr[100];
	int i = 0;
	int counter = 0;
	int max = 0;

	printf("입력받을 문자열: ");
	scanf("%s", arr); 
	
	while (arr[i] != '\0') {
		counter++;
		i++;
	}

	max = arr[0];
	for (i = 0; i < counter; i++) {
		if (max < arr[i]) {
			max = arr[i];
		}
	}

	printf("%c ", max);
}