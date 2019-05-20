#include <stdio.h>

void main(){
	int input_num1=0;
	int input_num2=0;
	int input_num3=0;
	double min=0;
	char result='F';
	
	printf("국어 영어 수학 점수를 입력하시오. ex) 64 86 95: ");
	scanf("%d %d %d", &input_num1, &input_num2, &input_num3);
	min= ((double)input_num1 + input_num2 + input_num3)/3;

	if(min>=90){
		result = 'A';
	}else if(min>=80){
		result = 'B';
	}else if(min>=70){
		result = 'C';
	}else if(min>=50){
		result = 'D';
	}else{
		result = 'F';
	}

	printf("평균점수 %.3f , 학점은 %c 입니다.",min, result);
}
