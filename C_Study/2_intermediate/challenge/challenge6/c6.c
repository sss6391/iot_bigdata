#include <stdio.h>
#pragma warning (disable:4996)

void main() {
	int input_num;
	int h;
	int m;
	int s;

	printf("초를 입력하세요: ");
	scanf("%d", &input_num);

	h = input_num / 3600;
	input_num = input_num - (h * 3600);
	m = input_num / 60;
	input_num = input_num - (m * 60);
	s = input_num;

	printf("h:%d, m:%d, s:%d", h, m, s);
}