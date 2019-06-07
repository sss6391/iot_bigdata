#include <stdio.h>
#pragma warning (disable:4996)
#define DEBUG

int main() {
	int num1, num2;

#ifdef DEBUG
	puts("main] debug1");
#endif	
	printf("두 개의 정수 입력: ");
#ifdef DEBUG
	puts("main] debug2");
#endif	
	scanf("%d %d", &num1, &num2);
#ifdef DEBUG
	puts("main] debug3");
#endif	

#ifdef DEBUG
	puts("main] debug4");
#endif	
	printf("%d + %d = %d \n", num1, num2, num1 + num2);

#ifdef DEBUG
	puts("main] debug5");
#endif	
	printf("%d - %d = %d \n", num1, num2, num1 - num2);
#ifdef DEBUG
	puts("main] debug6");
#endif	
}