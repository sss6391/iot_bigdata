#include <stdio.h>

void main(){
	int input_num1=0;
	int input_num2=0;
	int result=0;
	int abs=0;
	
	printf("�� ������ �Է��Ͻÿ�. ex) 2 9: ");
	scanf("%d %d", &input_num1, &input_num2);
	
	result = input_num1 - input_num2;
	result = result>0 ? result:result*(-1);

	printf("�� ������ ���� %d �Դϴ�.", result);
}
