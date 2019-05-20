#include <stdio.h>

void main(){
	int input_number=0;
	int limit_number=1;
	
	printf("정수를 입력하세요: ");
	scanf("%d", &input_number);
	while(limit_number<=input_number){
		printf("Hello world!\n");
		limit_number++;
	}
}
