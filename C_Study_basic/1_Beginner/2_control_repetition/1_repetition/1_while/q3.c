#include <stdio.h>

void main(){
	int input_number=1;
	int total=0;
	
	printf("���ڸ� �Է��ϼ���: ");
	scanf("%d",&input_number);

	while(input_number != 0){
		total = total + input_number;
		printf("��ü ������ ���� %d �Դϴ�.\n",total);
		printf("���ڸ� �Է��ϼ���. (�����Ͻ÷��� 0�� �Է��ϼ���.): ");
		scanf("%d",&input_number);
		}
}
