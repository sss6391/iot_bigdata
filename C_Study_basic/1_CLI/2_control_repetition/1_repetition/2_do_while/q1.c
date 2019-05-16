#include <stdio.h>
void main(){
	int input_num=0;
	int limit_num=0;
	int	total=0;

	while(limit_num<5){
		printf("정수를 입력하세요: ");
		scanf("%d", &input_num);

			while(input_num<1){
			printf("1이상의 수를 입력하세요: ", input_num);
			scanf("%d", &input_num);
			}

		printf(" %d 를 입력했습니다.\n", input_num);
		total = total + input_num;
		printf("현재까지 총합은 %d입니다.\n", total);
		limit_num++;
	}
	printf("총합은 %d입니다.", total);
}
