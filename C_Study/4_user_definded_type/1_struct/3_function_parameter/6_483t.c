#include <stdio.h>
#pragma warning (disable:4996)

typedef struct point {
	int xpos;
	int ypos;
} Point;


// Call by Refernce type1: ���ڿ� ���� �ּҰ��� �Ѱ���
// ����: ���ڿ� ���� �޸� ī�� �۾��� �Ͼ�� �ʾƼ�
//			���α׷� �ӵ�, �޸� ��� ȿ���� ���� �� �ִ�.

Point AddPoint1(Point *pos1, Point *pos2) {
	Point pos = { pos1->xpos + pos2->xpos, pos1->ypos + pos2->ypos };
	return pos;
}

// Call by Refernce type2: ���� �� ��ȯ �������� �Ű������� ó���Ͽ� �Ѱ���
// ����: ȣ���ϴ� �ʿ��� ��ȯ ���� ���� �޸� ī�ǰ� �Ͼ�� �ʾ�
//			���α׷� �ӵ�, �޸� ��� ȿ���� ���� �� �ִ�.

void AddPoint2(Point* pos1, Point* pos2, Point* pos3) {
	pos3->xpos = (*pos1).xpos + (*pos2).xpos;
	pos3->ypos = (*pos1).ypos + (*pos2).ypos;
}

// Call by Refernce type3: type2�� �����ϸ� �߰������� ��ȯ���� �����ϸ� �ش� ��ȯ����
//	������ �Լ��� ���������� �����ߴ����� ���� �����ڵ带 ������ (�ǹ����� ���� ���)
// ex) 0: �������, 1: ���� ���� ���� 2: Segmantation Fault ...

int AddPoint3(Point* pos1, Point* pos2, Point* pos3) {
	pos3->xpos = pos1->xpos + pos2->xpos;
	pos3->ypos = pos1->ypos + pos2->ypos;
	
	return 0;
	// ������ ��ȯ
}

void MinPoint(Point *pos1, Point *pos2, Point *pos3) {
	pos3->xpos = pos1->xpos - pos2->xpos;
	pos3->ypos = pos1->xpos - pos2->ypos;
}

void main() {
	Point pos1 = { 5,6 };
	Point pos2 = { 2,9 };
	Point result;

	AddPoint(&pos1, &pos2, &result);
	printf("[%d, %d] \n", result.xpos, result.ypos);
	MinPoint(&pos1, &pos2, &result);
	printf("[%d, %d] \n", result.xpos, result.ypos);
}
