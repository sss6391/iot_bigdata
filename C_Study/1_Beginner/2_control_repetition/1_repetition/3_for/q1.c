#include <stdio.h>

void main(){
	int num1=0;
	int num2=0;
	int total=0;

	printf("�� ������ �Է��ϼ��� (���� �������� ���� ������ Ŀ�ߵ� ex:3 6): ");
	scanf("%d %d",&num1, &num2);

	for(; num1!=num2+1; num1++){
		total = num1 + total;
	}	
	printf("�� ���� %d �Դϴ�", total);
	
}
