#include <stdio.h>

void main(){
	int num;
	printf("���� �Է�: ");
	scanf("%d", &num);

	// num�� ������ ��쿡 12��, 15�� ������ ���ʿ��ϰ� ����Ǿ���.
	// �̴� ������ �ʿ��ϴ�.
	if(num<0){
		printf("�Է� ���� 0���� �۴�. \n");
	}
	if(num>0){
		printf("�Է� ���� 0���� ũ��. \n");
	}
	if(num==0){
		printf("�Է� ���� 0�̴�. \n");
	}
}
