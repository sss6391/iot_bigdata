#include <stdio.h>

void main(){
	int num1=0;
	int num2=0;
	int total=0;

	printf("두 정수를 입력하세요 (앞의 정수보다 뒤의 정수가커야됨 ex: 3 6): ");
	scanf("%d %d",&num1, &num2);
	while(num1!=num2+1){
		total = num1 + total;
		num1++;
	}
	printf("총 합은 %d 입니다", total);
	
}
