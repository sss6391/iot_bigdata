#include <stdio.h>

void main(){
	// while���� ���ᰡ �Ǵ� ������ ����� �� ���� �������� �ʱⰪ��
	// �̻��� ������ �߰��� ������ �ؾ��Ѵ�.
	int total=0, input_num=1;

	while(input_num!=0){
		printf("���� �Է�(0 to quit): ");
		scanf("%d", &input_num);
		total = total + input_num;
	}


	printf("�հ�: %d \n", total);
}
