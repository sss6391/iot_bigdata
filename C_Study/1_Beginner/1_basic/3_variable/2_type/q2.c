#include <stdio.h>

void main(){
	double number1=0;
	double number2=0;
	double result;

	printf("�� �Ǽ��� �Է��ϼ��� ex)2.3 4.5: \n");
	scanf("%lf %lf", &number1, &number2);

	result=number1+number2;
	printf("%f+%f=%f\n",number1,number2, result);

	result=number1-number2;
	printf("%f-%f=%f\n",number1,number2, result);

	result=number1*number2;
	printf("%f*%f=%f\n",number1,number2, result);

	result=number1/number2;
	printf("%f/%f=%f\n",number1,number2, result);

}
