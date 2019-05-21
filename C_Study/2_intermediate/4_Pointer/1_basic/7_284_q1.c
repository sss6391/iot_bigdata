#include <stdio.h>
#pragma warning (disable:4996)

void main() {
	int num=10;
	int *ptr1=&num;
	int *ptr2=ptr1;

	(*ptr1)++;
	(*ptr2)++;
	prinf("%d\n", num);
	

}
