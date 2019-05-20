#include <stdio.h>
int Bignum(num1, num2, num3);
int smallnum(num1, num2, num3);

void main(){
	int num1;
	int num2;
	int num3;

	printf("세 개의 정수를 입력: ");
	scanf("%d %d %d", &num1, &num2, &num3);


	printf("세개의 정수중 가장 큰 값은 %d 이고 가장 작은 값은 %d 입니다.", 
					Bignum(num1, num2, num3), smallnum(num1, num2, num3) );
}

int Bignum(int num1, int num2, int num3){
	if(num1 > num2 && num1 > num3){
		return num1;
	}else if(num2 > num3){
		return num2;
	}else{
		return num3;	
	}
}

int smallnum(int num1, int num2, int num3){
	if(num1 < num2 && num1 < num3){
		return num1;
	}else if(num2 < num3){
		return num2;
	}else{
		return num3;	
	}
}



