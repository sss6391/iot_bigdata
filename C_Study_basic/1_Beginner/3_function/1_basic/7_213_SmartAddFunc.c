#include <stdio.h>
// �ؼ�: �� ���α׷��� �Լ��� 4���� ������ �����Ͽ� ���α׷��� �ϼ��ϴµ�
// ������ �ξ���.
// ���������� �Լ��� ũ��� �Ϲ������� 50~100 ���� ������ �Ը� Ŀ����
// ��쿡 �̸� �Լ�ȭ �Ѵ�.
// �ƴϸ� Ư�� ����� �����ϴ� ���� ��Ȯ�ϴٸ� ���� ���� ������ �Լ���
// ���� �� �ִ�.

int Add(int num1, int num2){		// ����: o ��ȯ ��: o
	return num1+num2;
}

void ShowAddResult(int num){		// ����: o ��ȯ ��: x
	printf("������� ���: %d \n", num);
}

int ReadNum(void){					// ����: x, ��ȯ ��: o
	int num;
	scanf("%d",&num);
	return num;
}

void HowToUseThisProg(void){		// ����: x, ��ȯ ��: x 
	printf("�Լ��� 4���� ������ ����� ���� ver1== \n");
	printf("�ΰ��� ������ �Է��Ͻø� ���� ����� ��µ˴ϴ�. \n");
	printf("��! �׷� �� ���� ������ �Է��ϼ���: ");
}
void main(void){
	int result, num1, num2;
	HowToUseThisProg();
	num1=ReadNum();
	num2=ReadNum();
	result = Add(num1, num2);
	ShowAddResult(result);
}
