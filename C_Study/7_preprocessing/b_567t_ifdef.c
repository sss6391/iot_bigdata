#include <stdio.h>
#pragma warning (disable:4996)
// cl/DEBUG b_567t_ifdef.c
// DEBUG ��ũ�� ����� #define �Ӹ� �ƴ϶� ������ �ɼǿ� ���� ���� ������ �� �ִ�.

// Visual Studio�� ��ó���⿡�� ; �ڿ� �����ϴ� DEBUG�� ���� �ȴ�

int main() {
	int num1, num2;

#ifdef DEBUG
	puts("main] debug1");
#endif	
	printf("�� ���� ���� �Է�: ");
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