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
	if(num1 > num2 && num1 > num3 && num1 > num4 && num1 > num5){
		return num1;
	}else if(num2 > num3 && num2 > num4 && num2 > num5){
		return num2;
	}else if(num3 > num4 && num3 > num5){
		return num3;
	}else if(num4 > num5){
		return num4;
	}else{
		return num5;	
	}
}
/*

if(num1 > num2) (num3 > num4)
		w		>	b
				w < num5
 */




int smallnum(int num1, int num2, int num3, int num4, int num5){
	if(num1 < num2 && num1 < num3 && num1 < num4 && num1 < num5){
		return num1;
	}else if(num2 < num3 && num2 < num4 && num2 < num5){
		return num2;
	}else if(num3 < num4 && num3 < num5){
		return num3;
	}else if(num4 < num5){
		return num4;
	}else{
		return num5;	
	}
}
