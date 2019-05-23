#include <stdio.h>
#pragma warning (disable:4996)

void main() {
	int arr[] = { 1,2,3,4,5 };
	int *ptr = arr;
	int index;

	for (index = 0; index < (sizeof(arr) / sizeof(int)); index++) {
		*(ptr + index) = *(ptr + index) + 2;
	}

	for (index = 0; index < (sizeof(arr) / sizeof(int)); index++) {
		printf("%d ", arr[index]);
	}
}