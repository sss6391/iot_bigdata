#include <stdio.h>

void main(){
	int number;
	int input_number;
	int result=1;

	printf("���ڸ� �Է��ϼ���: ");
	scanf("%d",&input_number);
 	for (number=1;number<=input_number;number++){
		result=result*number;
		}
	printf("1���� �Է��� ���� %d ������ ��: %d", input_number,result);
}
