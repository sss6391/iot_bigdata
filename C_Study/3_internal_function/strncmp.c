#include <stdio.h>
#include <string.h>
#pragma warning (disable:4996)

int My_strncmp(char *arr1, char *arr2, int limit){
	int index;

	for (index = 0; 0 <= arr1[index] && arr1[index] < 128 &&
		0 <= arr2[index] && arr2[index] < 128 && index<limit;index++) {
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
	printf("%d", My_strncmp("asd", "asdd", 3));
}
