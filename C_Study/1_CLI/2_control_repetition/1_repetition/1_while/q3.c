#include <stdio.h>

void main(){
	int input_number=1;
	int total=0;
	
	printf("숫자를 입력하세요: ");
	scanf("%d",&input_number);

	while(input_number != 0){
		total = total + input_number;
		printf("전체 숫자의 합은 %d 입니다.\n",total);
		printf("숫자를 입력하세요. (종료하시려면 0을 입력하세요.): ");
		scanf("%d",&input_number);
		}
}
