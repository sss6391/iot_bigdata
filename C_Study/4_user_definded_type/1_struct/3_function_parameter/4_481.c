#include <stdio.h>
#pragma warning (disable:4996)

typedef struct point {
	int xpos;
	int ypos;
} Point;

void OrgSymTrans(Point* ptr) {
	ptr->xpos = (ptr->xpos) * -1;
	ptr->ypos = (ptr->ypos) * -1;
}

/*
void ShowPosition(Point pos) {
	printf("[%d, %d] \n", pos.xpos, pos.ypos);
}
*/

void ShowPosition(Point *pos) {
	printf("[%d, %d] \n", (*pos).xpos, (*pos).ypos);
}

void main() {
	Point pos = { 7,-5 };
	OrgSymTrans(&pos);
	ShowPosition(&pos);
	OrgSymTrans(&pos);
	ShowPosition(&pos);
}