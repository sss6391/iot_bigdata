#include <stdio.h>

void main(){
	int input_number=0;
	int limit_number=9;
	int result;

	printf("������ �Է��ϼ���: ");
	scanf("%d", &input_number);
	while(limit_number > 0){
		result = input_number * limit_number;
		printf(" %d * %d = %d \n", input_number, limit_number, result);
		limit_number--;
	}
}
