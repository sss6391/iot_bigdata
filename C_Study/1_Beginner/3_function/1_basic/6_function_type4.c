#include <stdio.h>
// �Լ� ���� 4
// ��ȯŸ�� O, ���� O (��ȯŸ���� �ְ� ���ڵ� �ִ� ���̽�)
// ����: �Լ��� �Լ��� ������ �˰��� ���� ������ �� �ִ� �����̴�.
// ����:

int my_add(int input_number1, int input_number2){ // �Լ� ���� (Function Definition)
	int operation_result;

	printf("\n- ������ ���� ���� ver1\n");
	printf("ù ��° �Է�: %d\n", input_number1);
	printf("�� ��° �Է�: %d\n", input_number2);

	operation_result = input_number1 + input_number2;
	printf("%d + %d = \n", input_number1, input_number2);
	
	return operation_result; // ������ �����ϴ� ���
}

void main(){	
	int number1, number2, result;
	printf("�� ���� �Է��ϼ���: ");
	scanf("%d %d",&number1,&number2);

	result = my_add(number1, number2);
	printf("%d\n", result);
}
