#include <stdio.h>
extern void Increment();
//void Increment();
extern int GetNum();
//int GetNum();

//extern int num2;

void main() {
	printf("num: %d\n", GetNum());
	Increment();
	printf("num: %d\n", GetNum());
	Increment();
	printf("num: %d\n", GetNum());
//	printf("func->num2: %d\n", num2);
}
