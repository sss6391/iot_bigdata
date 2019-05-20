#include <stdio.h>
#pragma warning (disable:4996)

void main() {
	int input_number;
	
	printf("16진수로 변환할 정수를 입력하세요: ");
	scanf("%d", &input_number);

	printf("입력하신 %d 는 16진수로 %x 입니다",input_number, input_number);
}