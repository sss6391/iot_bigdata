#include <stdio.h>

void main(){
	int input_number1, input_number2;

	printf("ù��° ���� �Է��ϼ���: ");
	scanf("%d", &input_number1);

	printf("�ι�° ���� �Է��ϼ���: ");
	scanf("%d", &input_number2);

	printf("%d+%d=%d\n",input_number1,input_number2,input_number1+input_number2);
	printf("%d-%d=%d\n",input_number1,input_number2,input_number1-input_number2);
	printf("%d*%d=%d\n",input_number1,input_number2,input_number1*input_number2);
	printf("%d/%d=%d\n",input_number1,input_number2,input_number1/input_number2);
	printf("%d%%%d=%d\n",input_number1,input_number2,input_number1%input_number2);
}
