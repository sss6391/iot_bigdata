#include <stdio.h> // standard io
				   // IO: Input/Output

void main(){
		int result=0;
		int second_result=0;
		int input_number1=3;
		int input_number2=2;

		printf("%d+%d=%d\n",input_number1,input_number2,input_number1+input_number2);

		// ������ ������� �Ҵ�
		// = ���Կ�����(assignment operator)
		input_number1=3;
		input_number2=4;

		// ������ Expresstion(ǥ����)�� �Ҵ�
		result = input_number1+input_number2;
		printf("%d+%d=%d\n",input_number1,input_number2,result);

		// ������ �������� �Ҵ�
		second_result = result;
}
