#include <stdio.h>

void main(){
	int input_number=0;
	int input_number_copy=0;
	int sum_number=0;
	int total=0;
	float average=0;

	printf("��� ������ �Է¹����ðڽ��ϱ�? ex) 3 :  ");
	scanf("%d", &input_number);
	input_number_copy = input_number;

	while(0 < input_number){
	printf("������ �Է��ϼ���: ");
	scanf("%d", &sum_number);
		total = total + sum_number;
		printf("�� �հ�� %d �Դϴ�.\n", total);
		input_number--;
		}
	average = (float)total / input_number_copy;
	printf("��� ���� %f �Դϴ�", average);
}
