#include <stdio.h>

void main(){
	int input_num=0;
	int counter=1;
	int factorial=1;

	printf("������ �Է��ϼ���: ");
	scanf("%d",&input_num);
	
	do{
		factorial = counter*factorial;
		counter++;
	}while(counter!=input_num+1);
		
	printf("����� %d �Դϴ�", factorial);
	
}
