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
	// ���� �� ���� ������ ������� ��� ������ �� ������ || �� ����
	// ���������� ������ �� ���ɼ��� ����. (((�������� 1�̸� ture�� ��)))
	// ���࿡ num1�� ������ �߿��� �����̶�� (ex: password)
	// num3 ���ǿ� ���Ͽ� ��ü �� ����� �ְ�� �� �ִ�.
	printf("num1==1 && num2==15 || num3>0	=>	���: %d\n\n", result);

	// num1 ������ ������ �߿��� ������ ��쿡�� () �����ڸ� ����Ͽ�
	// �켱������ �����Ѵ�.
	result = (num1==1 && (num2==15 || num3>0));
	printf("num1==1 && (num2==15 || num3>0)	=>	���: %d\n\n", result);

	result = (num1>0 || num2==15 && num3<0);
	printf("num1>0 || num2==15 && num3<0	=>	���: %d\n\n", result);
}
