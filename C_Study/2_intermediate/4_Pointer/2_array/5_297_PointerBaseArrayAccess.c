#include <stdio.h>
#pragma warning (disable:4996)

void main() {
	int arr[3]={11, 22, 33};
	int * ptr=arr;
	printf("%d %d %d \n", *ptr, *(ptr+1), *(ptr+2));

	printf("%d ", *ptr); ptr++;
	printf("%d ", *ptr); ptr++;
	printf("%d ", *ptr); ptr--;
	printf("%d ", *ptr); ptr--;
	printf("%d ", *ptr); printf("\n"); 

}
