#include <stdio.h>

void main(){
	int input_num=0;
	int counter=1;
	int factorial=1;

	printf("������ �Է��ϼ���: ");
	scanf("%d",&input_num);
	
	while(counter!=input_num+1){
		factorial = counter*factorial;
		counter++;
	}	
	printf("����� %d �Դϴ�", factorial);
	
}
