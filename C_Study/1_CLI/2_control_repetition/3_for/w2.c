#include <stdio.h>

void main(){
	int input_num=0;
	int counter=1;
	int factorial=1;

	printf("정수를 입력하세요: ");
	scanf("%d",&input_num);
	
	while(counter!=input_num+1){
		factorial = counter*factorial;
		counter++;
	}	
	printf("계승은 %d 입니다", factorial);
	
}
