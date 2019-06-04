#include <stdio.h>
#pragma warning (disable:4996)

struct point{
	int xpos;
	int ypos;
};

struct circle{
	double radius;
	struct point* center;
};

void main() {
	struct point cen = { 2,7 };
	double red = 5.5;

	struct circle ring = { red, &cen };
	printf("원의 반지름: %g \n", ring.radius);
	printf("원의 중심 [%d, %d] \n", (ring.center)->xpos, (ring.center)->ypos);
}
