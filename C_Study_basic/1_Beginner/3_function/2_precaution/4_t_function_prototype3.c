#include <stdio.h>

// �Լ� ���� (Function ProtoType)
// �Ʒ��� ���� �Լ� ���Ǻΰ� �Լ� ȣ�� ���� �տ� ���ǰ� �Ǿ� �ִ� ��Ȳ����
// �Լ� ������ �� �ʿ䰡 ������?
// �Լ� ������ �� �ʿ䰡 �ִ�.
// Ư�� �Ӻ���� �����Ϸ��� ������ �Լ� ������ �ؾ��� �Լ��� ����� �� �ְ� ����Ǿ��ִ�.
// ���� Ư�� �����Ϸ����� �Լ� ������ ���� �ʰ� ���� �����ߴ� �ڵ尡
// ��������(�����Ͽ���, ��Ÿ�ӿ���)���� ������ �� �ִ�.
// ���� ��ü���� ���α׷��� ������ �����ϴ� ���鿡���� �Լ� ������ �ڵ� ���� �տ�
// ���ִ� ���� �ڵ��� ������, ���ؼ��� ���̴µ� ������ �ȴ�.
// �Լ� ������ �Ϲ������� �ش� include�� ������ ��ġ�Ѵ�.

void my_add(void); // �Լ� ���� (Function Declaration)

void my_add(void){ // �Լ� ���Ǻ� (Function Definition)
	int number1;
	int number2;
	int result;

	printf("�� ���� �Է��ϼ���: ");
	scanf("%d %d",&number1,&number2);

	printf("\n- ������ ���� ���� ver1\n");
	printf("ù ��° �Է�: %d\n", number1);
	printf("�� ��° �Է�: %d\n", number2);

	result = number1 + number2;
	printf("%d + %d = %d\n", number1, number2, result);
}

void main(){	
	my_add(); // �Լ� ȣ�� (Function Call)
}
