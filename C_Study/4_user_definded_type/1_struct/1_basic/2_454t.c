#include <stdio.h>
#include <math.h>
#pragma warning (disable:4996)

struct student_point{
	int x_position;
	int y_position;
};

void main() {
	struct student_point Sungmin, Sangwoo;
	double distance;

	fputs("Sungmin position: ", stdout);
	scanf("%d %d", &Sungmin.x_position, &Sungmin.y_position);

	fputs("Sangwoo position: ", stdout);
	scanf("%d %d", &Sangwoo.x_position, &Sangwoo.y_position);

	/* �� ������ �Ÿ� ��� ����*/
	distance = sqrt((double)((Sungmin.x_position - Sangwoo.x_position) * (Sungmin.x_position - Sangwoo.x_position)
		+ (Sungmin.y_position - Sangwoo.y_position) * (Sungmin.y_position - Sangwoo.y_position)));
	printf("�� ���� �Ÿ��� %g �Դϴ�. \n", distance);
}
