#include <stdio.h>

void main(){
	int input_num=0;
	int counter=1;
	int factorial=1;

	printf("������ �Է��ϼ���: ");
	scanf("%d",&input_num);

	for(; counter!=input_num+1; counter++){
		factorial = counter*factorial;
	}	
	printf("����� %d �Դϴ�", factorial);
	
}
