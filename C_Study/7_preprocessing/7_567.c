#include <stdio.h>
#pragma warning (disable:4996)
#define ADD 1
#define MIN 1

int main() {
	int num1, num2;
	printf("�� ���� ���� �Է�: ");
	scanf("%d %d", &num1, &num2);


#if ADD
	printf("%d + %d = %d \n", num1, num2, num1 + num2);
#endif

#if MIN
	printf("%d - %d = %d \n", num1, num2, num1 - num2);
#endif
}