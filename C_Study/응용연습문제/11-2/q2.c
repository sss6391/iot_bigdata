#include <stdio.h>
#pragma warning (disable:4996)

void main() {
	char string[] = "Good time";
	int index;

	 for (index = 0; index < sizeof(string); index++) {
		 printf("%c", string[index]);
	 }
}