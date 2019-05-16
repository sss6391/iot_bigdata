#include <stdio.h>
void fibo(input_num);

void main(){
	int input_num;
		printf("출력할 피보나치 수열의 갯수를 입력: ");
		scanf("%d", &input_num);
		fibo(input_num);
}

void fibo(int input_num){
	int f1=1;
	int f2=0;
	int f3=0;
	int limit1=0;
	int limit2=0;

		while( limit1 < input_num ){
			limit1++;
			while( limit2 < limit1 ){
				printf("%d ", f3 );
				f3 = f1 + f2;
				f1 = f2;
				f2 = f3;
				limit2++;
			}
		}
}
