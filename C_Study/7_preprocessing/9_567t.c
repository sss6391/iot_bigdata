#include <stdio.h>
#pragma warning (disable:4996)
#define DEBUG 0

int main() {
	int num1, num2;

#if DEBUG
	puts("main] debug1");
#endif	
	printf("두 개의 정수 입력: ");
#if DEBUG
	puts("main] debug2");
#endif	
	scanf("%d %d", &num1, &num2);
#if DEBUG
	puts("main] debug3");
#endif	

#if DEBUG
	puts("main] debug4");
#endif	
	printf("%d + %d = %d \n", num1, num2, num1 + num2);

#if DEBUG
	puts("main] debug5");
#endif	
	printf("%d - %d = %d \n", num1, num2, num1 - num2);
#if DEBUG
	puts("main] debug6");
#endif	
}