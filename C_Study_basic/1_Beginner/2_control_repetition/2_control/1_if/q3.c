#include <stdio.h>

void main(){
	int input_num1=0;
	int input_num2=0;
	int input_num3=0;
	int min=0;
	char result=0;
	
	printf("���� ���� ���� ������ �Է��Ͻÿ�. ex) 64 86 95: ");
	scanf("%d %d %d", &input_num1, &input_num2, &input_num3);
	min= (input_num1 + input_num2 + input_num3)/3;

		printf("��������� %d , ", min);
	if(min>=90){
		printf("������ A �Դϴ�.");
	}else if(min>=80){
		printf("������ B �Դϴ�.");
	}else if(min>=70){
		printf("������ C �Դϴ�.");
	}else if(min>=50){
		printf("������ D �Դϴ�.");
	}else{
		printf("������ F �Դϴ�.");
	}

}
