#include <stdio.h>
#pragma warning (disable:4996)
#define HIT_NUM		8

void main() {
#if HIT_NUM == 5
	puts("��ũ�� ��� HIT_NUM�� ���� 5�Դϴ�.");
#else
	puts("��ũ�� ��� HIT_NUM�� ���� 5�� �ƴմϴ�.");
#endif
}
