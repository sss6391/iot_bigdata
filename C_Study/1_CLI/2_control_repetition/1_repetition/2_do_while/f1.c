#include <stdio.h>
void main(){
	int input_num=0;
	int limit_num=0;
	int	total=0;

	for(;limit_num<5;limit_num++){
		printf("정수를 입력하세요: ");
		scanf("%d", &input_num);

		for(;input_num<1;){
			printf("1이상의 수를 입력하세요: ", input_num);
			scanf("%d", &input_num);
			}
		total = total + input_num;
	}
	printf("총합은 %d입니다.", total);
}
