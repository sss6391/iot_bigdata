#include <stdio.h>
void main(){
	int input_num=0;
	int limit_num=0;
	int	total=0;

	while(limit_num<5){
		printf("������ �Է��ϼ���: ");
		scanf("%d", &input_num);

			while(input_num<1){
			printf("1�̻��� ���� �Է��ϼ���: ", input_num);
			scanf("%d", &input_num);
			}

		printf(" %d �� �Է��߽��ϴ�.\n", input_num);
		total = total + input_num;
		printf("������� ������ %d�Դϴ�.\n", total);
		limit_num++;
	}
	printf("������ %d�Դϴ�.", total);
}
