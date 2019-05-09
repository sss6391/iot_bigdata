#include <stdio.h>

void main(){
	int num1=10;
	int num2=15;
	int num3=21;
	int result=0; 


	result = (num1==1 && num2==15 || num3>0);
	// Step1] (0 && 1 || 1)
	// Step2] (0 || 1)
	// Step3] 1
	// 따라서 논리 연산 조건이 어려개인 경우 마지막 논리 연산이 || 일 경우는
	// 관용적으로 조건이 될 가능성이 높다. (((마지막이 1이면 ture가 됨)))
	// 만약에 num1이 굉장히 중요한 조건이라면 (ex: password)
	// num3 조건에 의하여 전체 평가 결과가 왜곡될 수 있다.
	printf("num1==1 && num2==15 || num3>0	=>	결과: %d\n\n", result);

	// num1 조건이 굉장히 중요한 조건인 경우에는 () 연산자를 사용하여
	// 우선순위를 조정한다.
	result = (num1==1 && (num2==15 || num3>0));
	printf("num1==1 && (num2==15 || num3>0)	=>	결과: %d\n\n", result);

	result = (num1>0 || num2==15 && num3<0);
	printf("num1>0 || num2==15 && num3<0	=>	결과: %d\n\n", result);
}
