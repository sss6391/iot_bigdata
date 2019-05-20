#include <stdio.h>

void main(){
	int input_num1=0;
	int input_num2=0;
	int input_num3=0;
	int min=0;
	char result=0;
	
	printf("국어 영어 수학 점수를 입력하시오. ex) 64 86 95: ");
	scanf("%d %d %d", &input_num1, &input_num2, &input_num3);
	min= (input_num1 + input_num2 + input_num3)/3;

		printf("평균점수는 %d , ", min);
	if(min>=90){
		printf("학점은 A 입니다.");
	}else if(min>=80){
		printf("학점은 B 입니다.");
	}else if(min>=70){
		printf("학점은 C 입니다.");
	}else if(min>=50){
		printf("학점은 D 입니다.");
	}else{
		printf("학점은 F 입니다.");
	}

}
