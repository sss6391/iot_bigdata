#include <stdio.h>
#pragma warning (disable:4996)

void main() {
	int num1=10, num2=20;

	int *ptr1=&num1;
	int *pte2=&num2;
	int *temp;

	(*ptr1)+=10;
	(*ptr2)-=10;

	temp=ptr1;
	ptr1=ptr2;
	ptr2=temp;

	printf("%d %d\n", *ptr1, &ptr2);
}
