#include <stdio.h>

void main(){
	int input_num1=0;
	int input_num2=0;
	int result=0;
	int abs=0;
	
	printf("두 정수를 입력하시오. ex) 2 9: ");
	scanf("%d %d", &input_num1, &input_num2);
	
	result = input_num1 - input_num2;
	result = result>0 ? result:result*(-1);

	printf("두 정수의 차는 %d 입니다.", result);
}
