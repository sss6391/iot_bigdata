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

	printf("\n사격형의 면적은 %d 입니다", area);
}

void Four_Pointers_Postion(Rectangle *p) {
	printf("\n\n---네 점의 좌표---\n");
	printf("[%d %d] [%d %d] [%d %d] [%d %d]\n", p->pos1.xpos, p->pos1.ypos, 
		p->pos2.xpos, p->pos2.ypos, p->pos1.xpos, p->pos2.ypos, p->pos2.xpos, p->pos1.ypos);
}

void main() {
	Rectangle p;

	printf("첫번째 좌표를 입력하세요 ex) 2 3: ");
	scanf("%d %d", &(p.pos1.xpos), &(p.pos1.ypos));
	printf("두번째 좌표를 입력하세요 ex) 5 6: ");
	scanf("%d %d", &(p.pos2.xpos), &(p.pos2.ypos));
		
	Cal_area(&p);
	Four_Pointers_Postion(&p);
}