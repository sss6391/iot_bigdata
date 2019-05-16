#include <stdio.h>

void main(){
	int input_number=0;
	int input_number_copy=0;
	int sum_number=0;
	int total=0;
	float average=0;

	printf("몇개의 정수를 입력받으시겠습니까? ex) 3 :  ");
	scanf("%d", &input_number);
	input_number_copy = input_number;

	while(0 < input_number){
	printf("정수를 입력하세요: ");
	scanf("%d", &sum_number);
		total = total + sum_number;
		printf("총 합계는 %d 입니다.\n", total);
		input_number--;
		}
	average = (float)total / input_number_copy;
	printf("평균 값은 %f 입니다", average);
}
