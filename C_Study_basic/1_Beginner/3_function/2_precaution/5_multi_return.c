#include <stdio.h>
int NumberCompare(int num1, int num2);

void main(){
	// printf("���� %d %d %d",N1, N2, N3); <= N1, N2, N3�� ���� ���ϰ� �� ������
	// 											���佺Ʈ���� ��Ī�Ѵ�.

	printf("3�� 4�߿��� ū ���� %d �̴�. \n", NumberCompare(3,4));
	// Step1] printf("3�� 4�߿��� ū ���� %d �̴�. \n", 4);
	// Step2] printf("3�� 4�߿��� ū ���� 4 �̴�. \n");
	
	printf("7�� 2�߿��� ū ���� %d �̴�. \n", NumberCompare(7,2));
}

int NumberCompare(int num1, int num2){
	// ���ǿ� ���� �پ��� ���� return �� �� �ִ�.
	
	/* CASE1
	if(num1>num2){
		return num1;
	}else{
		return num2;
	}
	*/

	/* CASE2
	if(num1>num2){
		return num1;
	}else if(num2>num1){
		return num2;
	}else{
		return 0;
	}
	*/

	// CASE3
	if(num1>num2){
		return num1;
	}else if(num2>num1){
		return num2;
	}

	// �߰����� ��ɹ��� �����ϰ� ���� ��쿡 CASE2���� ����ȭ�Ǿ� ���α׷��� �� �� �ִ�.
	// ��ɹ�1
	// ..
	// ��ɹ�N
	return 0;
}
