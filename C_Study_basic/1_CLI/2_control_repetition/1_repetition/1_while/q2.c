#include <stdio.h>

void main(){
	int input_number=0;
	int limit_number=1;
	int result;

	printf("������ �Է��ϼ���: ");
	scanf("%d", &input_number);
	while(limit_number<=input_number){
		result= 3 * limit_number;
		printf("%d\n",result);
		limit_number++;
		}
}
