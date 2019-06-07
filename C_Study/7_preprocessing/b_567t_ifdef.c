#include <stdio.h>
#pragma warning (disable:4996)
// cl/DEBUG b_567t_ifdef.c
// DEBUG 매크로 상수는 #define 뿐만 아니라 컴파일 옵션에 위와 같이 정의할 수 있다.

// Visual Studio은 전처리기에서 ; 뒤에 정의하는 DEBUG를 쓰면 된다

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