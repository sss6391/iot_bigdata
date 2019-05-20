#include <stdio.h>

void main(){
	int number;
	int input_number;
	int result=1;

	printf("숫자를 입력하세요: ");
	scanf("%d",&input_number);
 	for (number=1;number<=input_number;number++){
		result=result*number;
		}
	printf("1부터 입력한 숫자 %d 까지의 곱: %d", input_number,result);
}
