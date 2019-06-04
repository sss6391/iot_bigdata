#include <stdio.h>
#include <string.h>
#pragma warning (disable:4996)

int My_strcmp(char *arr1, char *arr2){
	int index;

	for (index = 0; 0 < arr1[index] && arr1[index] < 127 &&
		arr2[index] && arr2[index] < 127;index++) {
		if (arr1[index] > arr2[index]) {
			return 1;
		}
		if (arr1[index] < arr2[index]) {
			return -1;
		}
		if (arr1[index]==arr2[index]){
			continue;
		}
	}
	return 0;
}

void main() {
	printf("%d", My_strcmp("³ç", "¾È³ç"));
}
