#include <stdio.h>
#pragma warning (disable:4996)

typedef struct point {
	int xpos;
	int ypos;
} Point;

typedef struct rectangle {
	Point pos1;
	Point pos2;
}Rectangle;

void Cal_area(Rectangle *p) {
	int area;

	area = ((p->pos1.xpos) - (p->pos2.xpos)) * ((p->pos1.ypos) - (p->pos2.ypos));
	if (area<0)	{
		area = area * (-1);
	}

	printf("\n������� ������ %d �Դϴ�", area);
}

void Four_Pointers_Postion(Rectangle *p) {
	printf("\n\n---�� ���� ��ǥ---\n");
	printf("[%d %d] [%d %d] [%d %d] [%d %d]\n", p->pos1.xpos, p->pos1.ypos, 
		p->pos2.xpos, p->pos2.ypos, p->pos1.xpos, p->pos2.ypos, p->pos2.xpos, p->pos1.ypos);
}

void main() {
	Rectangle p;

	printf("ù��° ��ǥ�� �Է��ϼ��� ex) 2 3: ");
	scanf("%d %d", &(p.pos1.xpos), &(p.pos1.ypos));
	printf("�ι�° ��ǥ�� �Է��ϼ��� ex) 5 6: ");
	scanf("%d %d", &(p.pos2.xpos), &(p.pos2.ypos));
		
	Cal_area(&p);
	Four_Pointers_Postion(&p);
}