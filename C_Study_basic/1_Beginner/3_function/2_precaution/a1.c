#include <stdio.h>
int Progression(f2,f3);

void main(){
	int num=0;
	int total_num=0;
	int sum=0;
	double aver=0;

	printf("���� ������ �Է��ϼ���(����: ��): ");
	scanf("%d", &num);
	
	while( num>=0 ){
		sum = sum +num;
		total_num++;
		printf("���� ������ �Է��ϼ���(����: ��): ");
		scanf("%d", &num);
		while(num>100){
			printf("==> 100�� �ʰ��Ͽ����ϴ�. �Է� ������ 1~100�Դϴ�.\n");
			printf("���� ������ �Է��ϼ���(����: ��): ");
			scanf("%d", &num);
		}
	}
	aver = sum / (double)total_num;
	printf("�հ� %d, ��� %f, ���� %d" , sum, aver,(int)total_num);
}
