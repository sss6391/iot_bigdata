#include <stdio.h>
#pragma warning (disable:4996)

void main() {
	double num = 3.14;
	double *ptr = &num;
	double **dptr = &ptr;
	double *ptr2;

	printf("%9p %9p %9p \n", &num, ptr, *dptr);
	printf("%9g %9g %9g \n", num, *ptr, **dptr);

	ptr2 = *dptr;
	*ptr2 = 10.99;
	
	printf("%9g %9g %9g \n", num, *ptr, **dptr);
}
