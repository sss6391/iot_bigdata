#include <stdio.h>

// �Լ� ���Ǻΰ� �Լ� ȣ���ϴ� ���� �ؿ� ���� ��쿡�� ������ ������ �߻��Ѵ�.
//
void main(){	
	my_add(); // �Լ� ȣ�� (Function Call)
}

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

