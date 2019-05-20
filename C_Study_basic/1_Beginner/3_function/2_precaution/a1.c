#include <stdio.h>
int Progression(f2,f3);

void main(){
	int num=0;
	int total_num=0;
	int sum=0;
	double aver=0;

	printf("양의 정수를 입력하세요(음수: 끝): ");
	scanf("%d", &num);
	
	while( num>=0 ){
		sum = sum +num;
		total_num++;
		printf("양의 정수를 입력하세요(음수: 끝): ");
		scanf("%d", &num);
		while(num>100){
			printf("==> 100을 초과하였습니다. 입력 범위는 1~100입니다.\n");
			printf("양의 정수를 입력하세요(음수: 끝): ");
			scanf("%d", &num);
		}
	}
	aver = sum / (double)total_num;
	printf("합계 %d, 평균 %f, 개수 %d" , sum, aver,(int)total_num);
}
