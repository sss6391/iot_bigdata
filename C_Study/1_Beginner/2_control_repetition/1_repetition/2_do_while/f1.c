#include <stdio.h>
void main(){
	int input_num=0;
	int limit_num=0;
	int	total=0;

	for(;limit_num<5;limit_num++){
		printf("������ �Է��ϼ���: ");
		scanf("%d", &input_num);

		for(;input_num<1;){
			printf("1�̻��� ���� �Է��ϼ���: ", input_num);
			scanf("%d", &input_num);
			}
		total = total + input_num;
	}
	printf("������ %d�Դϴ�.", total);
}
