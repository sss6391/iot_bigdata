#include <stdio.h>
#pragma warning (disable:4996)

void SwapIntPtr(int **dp1, int **dp2){
	int * temp = *dp1;
	
	*dp1 = *dp2;
	*dp2 = temp;

}

void main() {
	int num1 =10, num2 = 20;
	int *ptr1, *ptr2;

	ptr1 = &num1, ptr2 = &num2;

	printf("*ptr1, *ptr2: %d %d \n", *ptr1, *ptr2);
	printf("*ptr1, *ptr2: %p %p \n\n", ptr1, ptr2);

	SwapIntPtr(&ptr1, &ptr2);
	printf("*ptr1, *ptr2: %d %d \n", *ptr1, *ptr2);
	printf("*ptr1, *ptr2: %p %p \n", ptr1, ptr2);
}
