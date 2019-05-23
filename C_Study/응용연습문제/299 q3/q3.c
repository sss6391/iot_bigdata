#include <stdio.h>
#pragma warning (disable:4996)

void main() {
	int arr[5] = { 1,2,3,4,5 };
	int *ptr = &arr[4];
	int index;
	int total=0;

	for (index = 0; index < (sizeof(arr) / sizeof(int)); index++) {
		total = total + *ptr;
		ptr--;
	}
		printf("%d ", total);
}