#include <stdio.h>
#include <math.h>
#pragma warning (disable:4996)

struct point
{
	int xpos;
	int ypos;
};

void main() {
	struct point pos1, pos2;
	double distance;

	fputs("point1 pos: ", stdout);
	scanf("%d %d", &pos1.xpos, &pos1.ypos);

	fputs("point1 pos: ", stdout);
	scanf("%d %d", &pos2.xpos, &pos2.ypos);

	/* �� ������ �Ÿ� ��� ����*/
	distance = sqrt((double)((pos1.xpos - pos2.xpos) * (pos1.xpos - pos2.xpos) +
		(pos1.ypos - pos2.ypos) * (pos1.ypos - pos2.ypos)));
	printf("�� ���� �Ÿ��� %g �Դϴ�. \n", distance);
}
