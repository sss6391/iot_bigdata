#include <stdio.h>
#pragma warning (disable:4996)

typedef struct point {
	int xpos;
	int ypos;
} Point;

typedef struct circle {
	Point cen;
	double rad;
} Circle;

void ShowCircleInfo(Circle* cptr) {
	
	// cptr�� �ּ��̱� ������ �Ʒ��� �Ұ����� ����
	// cptr.center;
	// (cptr->cen)->xpos;
	// cptr->cen->xpos;

	printf("[%d, %d]\n", (cptr->cen).xpos, (cptr->cen).ypos);
	printf("radius: %g \n\n", cptr->rad);
}

void main() {
	Circle c1 = { {1,2}, 3.5 };
	Circle c2 = { 2, 4, 3.5 };
	ShowCircleInfo(&c1);
	ShowCircleInfo(&c2);

	// �Ұ����� ����
	//c1�� �ּҰ� �ƴϱ� ������ -> �� �������� �ʴ´�
	//c1->radius;
	//c1.center->

	// ������ ����
	c1.rad;
	c1.cen.xpos;
	c1.cen.ypos;	
}
