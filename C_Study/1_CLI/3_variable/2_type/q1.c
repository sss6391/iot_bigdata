#include <stdio.h>

void main(){
	int input_left_x;
	int input_left_y;
	int input_right_x;
	int input_right_y;
	int result;

	printf("�� ����� x, y���� �Է��ϼ��� ex)2 4 : ");
	scanf("%d %d", &input_left_x, &input_left_y);
	
	printf("�� ����� x, y���� �Է��ϼ��� ex)5 9 : ");
	scanf("%d %d", &input_right_x, &input_right_y);

	result=(input_right_x-input_left_x)*(input_right_y-input_left_y);
	printf("�� ���� �̷�� ���簢���� ���̴� %d�Դϴ�",result);
}
