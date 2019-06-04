#include <stdio.h>
#pragma warning (disable:4996)

typedef struct point {
	int xpos;
	int ypos;
} Point;

void SwapPoint(Point *po1, Point *po2) {
	Point po3;
	po3 = *po2;
	*po2 = *po1;
	*po1 = po3;
}

void main() {
	Point pos1 = { 2,4 };
	Point pos2 = { 5,6 };
	
	printf("[%d %d]\n", pos1.xpos, pos1.ypos);
	printf("[%d %d]\n\n", pos2.xpos, pos2.ypos);
	SwapPoint(&pos1, &pos2);
	printf("[%d %d]\n", pos1.xpos, pos1.ypos);
	printf("[%d %d]\n\n", pos2.xpos, pos2.ypos);
}