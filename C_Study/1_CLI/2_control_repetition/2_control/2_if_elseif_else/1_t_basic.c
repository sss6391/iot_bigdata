#include <stdio.h>

void main(){
	int num;
	printf("���� �Է�: ");
	scanf("%d", &num);

	// if elseif �� ���� �ִ� if()�� ���̸� ������ elseif������ Ȯ������
	// �ʰ� ��ü if elseif �������� �������´�.
	// if elseif�� ������ ���� �ߺ��� ���� �ʾƾ��ϸ� �ߺ��� ���� �ʴ�
	// �������� if elseif�� �����Ͽ����� single if�� �ۼ��ϴ� �ͺ���
	// ���ʿ��ϰ� ������ üũ�ϴ� ��ɾ� ������ ���� �� �ִ�.
	if(num<0){
		printf("�Է� ���� 0���� �۴�. \n");
	}else if(num>0){
		printf("�Է� ���� 0���� ũ��. \n");
	}else if(num==0){
		printf("�Է� ���� 0�̴�. \n");
	}
}
