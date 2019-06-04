#include <stdio.h>
#pragma warning (disable:4996)

/*
typedef struct point {
	int xpos;
	int ypos;
} Point;
*/

struct point {
	int xpos;
	int ypos;
};

void ShowPosition(struct point pos) {
	printf("전달 받은 원본값 [%d, %d] \n", pos.xpos, pos.ypos);
	pos.ypos += 10;
	pos.xpos += 10;
	printf("ShowPosition에서 수정 [%d, %d] \n", pos.xpos, pos.ypos);
}

struct point GetCurrentPosition(void) {
	struct point cen;
	printf("Input current pos: ");
	scanf("%d %d", &cen.xpos, &cen.ypos);
	return cen;
}

void main() {
	struct point curPos = GetCurrentPosition();
	ShowPosition(curPos);

	printf("[%d, %d] \n", curPos.xpos, curPos.ypos);
}
