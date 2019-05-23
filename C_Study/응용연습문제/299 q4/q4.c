#include <stdio.h>
#pragma warning (disable:4996)

void main() {
	int arr[] = { 1,2,3,4,5,6 };
	int* ptr1 = arr;
	int* ptr2 = &arr[5];
	int index;
	int temparay;
	int length;

	length = ( sizeof(arr) / sizeof(int) );

	for (index = 0; index < ( length/2 ); index++) {
		temparay = *(ptr1 + index);
		*(ptr1 + index) = *(ptr2 - index);
		*(ptr2 - index) = temparay;
	}

	for (index = 0; index < length ; index++) {
		printf("%d ", arr[index]);
	}
}