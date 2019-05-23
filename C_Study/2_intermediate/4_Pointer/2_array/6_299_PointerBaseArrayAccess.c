#include <stdio.h>
#pragma warning (disable:4996)

void main() {
	int arr[3]={11, 22, 33};
	int * ptr=arr;
	printf("%d %d %d \n\n", *ptr, *(ptr+1), *(ptr+2));

	printf("%d %d %d \n", *(ptr+0), *(ptr+1), *(ptr+2));
	printf("%d %d %d \n", ptr[0], ptr[1], ptr[2]);
	printf("%d %d %d \n", *(arr+0), *(arr+1), *(arr+2));
	printf("%d %d %d \n", arr[0], arr[1], arr[2]);
}
