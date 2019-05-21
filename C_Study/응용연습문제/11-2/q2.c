#include <stdio.h>
#pragma warning (disable:4996)

void main() {
	char arr[] = "Good time";
	int i;
	int max;
	 
	 for (i = 0; i < sizeof(arr); i++) {
		 printf("%c", arr[i]);
	 }
}