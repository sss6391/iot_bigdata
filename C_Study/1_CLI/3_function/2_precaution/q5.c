#include <stdio.h>
int Bignum(num1, num2, num3);
int smallnum(num1, num2, num3);

void main(){
	int num1;
	int num2;
	int num3;
	int num4;
	int num5;

	printf("�ټ� ���� ������ �Է�: ");
	scanf("%d %d %d %d %d", &num1, &num2, &num3, &num4, &num5);

	printf("�ټ� ���� ������ ���� ū ���� %d �̰� ���� ���� ���� %d �Դϴ�.", 
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
