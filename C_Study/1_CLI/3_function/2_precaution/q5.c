#include <stdio.h>
int Bignum(num1, num2, num3);
int smallnum(num1, num2, num3);

void main(){
	int num1;
	int num2;
	int num3;
	int num4;
	int num5;

	printf("다섯 개의 정수를 입력: ");
	scanf("%d %d %d %d %d", &num1, &num2, &num3, &num4, &num5);

	printf("다섯 개의 정수중 가장 큰 값은 %d 이고 가장 작은 값은 %d 입니다.", 
					Bignum(num1, num2, num3, num4, num5), smallnum(num1, num2, num3, num4, num5) );
}

int Bignum(int num1, int num2, int num3, int num4, int num5){
	int a;
	int b;
	int c;

	if(num1 > num2){
		a = num1;
	}else{
		a = num2;
	}

	if(num3 > num4){
		b = num3;
	}else{
		b = num4;
	}

	if( a > b ){
		c = a;
	}else{
		c = b;
	}

	if( c > num5){
		return c;
	}else{
		return num5;
	}
}




int smallnum(int num1, int num2, int num3, int num4, int num5){
	int a;
	int b;
	int c;

	if(num1 < num2){
		a = num1;
	}else{
		a = num2;
	}

	if(num3 < num4){
		b = num3;
	}else{
		b = num4;
	}

	if( a < b ){
		c = a;
	}else{
		c = b;
	}

	if( c < num5){
		return c;
	}else{
		return num5;
	}

}
