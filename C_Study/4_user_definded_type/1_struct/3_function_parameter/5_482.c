#include <stdio.h>
#pragma warning (disable:4996)

typedef struct point {
	int xpos;
	int ypos;
} Point;

typedef struct point {
	char name[20];
	int xpos;
	int ypos;
} Point2;

void main() {
	Point pos1 = { 1,2 };
	Point pos2;
	Point2 pos3;

	pos2 = pos1;

// ����ü�� ���Կ����� ���� ���� ���ؼ��� �����ϴ�.
//	pos3 = pos1;

	printf("ũ��: %d \n", sizeof(pos1));
	printf("[%d, %d] \n", pos1.xpos, pos1.ypos);
	printf("ũ��: %d \n", sizeof(pos2));
	printf("[%d, %d] \n", pos2.xpos, pos2.ypos);

// ����ü�� ���Կ��길 �����ϰ� ��������� ������ ��Ÿ �ٸ� ������ �������� �ʴ´�
//	pos2 = pos2 + pos1;
}
