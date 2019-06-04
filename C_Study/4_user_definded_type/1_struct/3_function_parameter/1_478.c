#include <stdio.h>
#pragma warning (disable:4996)

/*
typedef struct point {
	int xpos;
	int ypos;
} Point;
*/

typedef struct point {
	int xpos;
	int ypos;
} Point;

// 구조체를 Call by value로 전달한 형태
void ShowPosition(Point pos) {
	printf("[%d, %d] \n", pos.xpos, pos.ypos);
}

Point GetCurrentPosition(void) {
	Point cen;
	printf("Input current pos: ");
	scanf("%d %d", &cen.xpos, &cen.ypos);
	return cen;
}

void main() {
	
	// 구조체는 대입 연산이 가능하다

	Point curPos = GetCurrentPosition();
	ShowPosition(curPos);
}
