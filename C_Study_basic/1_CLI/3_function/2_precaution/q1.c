#include <stdio.h>
int Bignum(num1, num2, num3);
int smallnum(num1, num2, num3);

void main(){
	int num1;
	int num2;
	int num3;

	printf("�� ���� ������ �Է�: ");
	scanf("%d %d %d", &num1, &num2, &num3);


	printf("������ ������ ���� ū ���� %d �̰� ���� ���� ���� %d �Դϴ�.", 
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



