#include <stdio.h>

// ��ü ���: �� ���� �Է� �޾Ƽ� ���� ���� ū ���� �Ǵ��� �ִ� ���α׷�
// �Ʒ� �� ���� Function Prototype(�Լ� ����)
// �Լ� ������ �ۼ��ϴ� ����: �Լ�����(Function Declaration)

int AbsoCompare(int num1, int num2);	// ������ ū ���� ��ȯ
int GetAbsoValue(int num);				// ���������� ������ ��ȯ

void main(){
	int num1, num2;
	printf("�� ���� ���� �Է�; ");
	scanf("%d %d", &num1, &num2);
	//printf("%d�� %d�� ������ ū ����: %d \n",	num1, num2, AbsoCompare(num1,num2));
	
	// �Լ��� ���ڰ� �� ��쿡�� �� �ٲ��� �ص� ������ ����.
	// �ٸ� ������ ������ �� ���� �ִ�. (Ex: Python)
	printf("%d�� %d�� ������ ū ����: %d \n",
				num1, num2, AbsoCompare(num1,num2));

	// printf �Լ� ù��° ������ ���ڿ����� ""\n�� ������� �ʰ�
	// �ٹٲ��� �� ��쿡�� ������ ������ �߻��Ѵ�.
	/*
	printf("%d�� %d�� 
					������ ū ����: %d \n",
			num1, num2, AbsoCompare(num1,num2));
	*/
}

int AbsoCompare(int num1, int num2){

	// �Լ��� main �Լ������� ȣ�� �� �� �ִ� ���� �ƴϴ�.
	// �Լ����� �Լ��� ȣ�� �� �� �ִ�.
	// ���� ������ �ϱ� ���ؼ� ����, ������ �Լ��� ���� ȣ���Ͽ� ���� ����� �������
	// �� ������ �Ѵ�.
	
	// ���α׷��� ����Ǵ� ����(�Լ�) => ���ؽ�Ʈ(context)
	// ������ȯ (Context Switch)
	
	if(GetAbsoValue(num1) > GetAbsoValue(num2)){
		return num1;
	}else{
		return num2;
	}
}

	// ���ȭ (modulaization) : ����ȭ ����, ��������

int GetAbsoValue(int num){
		if(num<0){
			return num * (-1);
		}else{
			return num;
		}
}
