#include <stdio.h>
// �Լ� ���� 3
// ��ȯŸ�� O, ���� X (��ȯŸ���� �ְ� ���ڰ� ���� ���̽�)
// ����: ȣ�� �ϴ� �ʿ����� �Է¿� ���Ͽ� �Ű澲�� �ʾƵ� �ǰ�
// 		������ ������� �޾Ƽ� ó�� �� �� �ִ�.
// ����: �Լ����� �Է��� ó���ؾ� �ϴ� �δ��� �߻��Ѵ�.

int my_add(void){ // �Լ� ���� (Function Definition)
	int number1;
	int number2;
	int operation_result;

	printf("�� ���� �Է��ϼ���: ");
	scanf("%d %d",&number1,&number2);

	printf("\n- ������ ���� ���� ver1\n");
	printf("ù ��° �Է�: %d\n", number1);
	printf("�� ��° �Է�: %d\n", number2);

	operation_result = number1 + number2;
	printf("%d + %d = \n", number1, number2);
	
	// return number1+number2; <= ǥ����(espression)�� �ְ� ���� ���� �����ϴ� ���
	return operation_result; // ������ �����ϴ� ���
}

void main(){	
	/*
	int result;
	
	result = my_add(); // �Լ� ȣ�� (Function Call)
	// my_add() = result; �������� �������� �ʴ� �߸��� ��뿹
	printf("%d\n", result);
	*/
	printf("%d\n", my_add());
	//printf("%d %d %d %d\n", my_add(), my_substraction(), my_multiplication(), my_division());
}
