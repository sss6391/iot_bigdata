#include <stdio.h>
#pragma warning (disable:4996)

void main(){
 	int villa[4][2];
	int popu, i, j;

	/*������ �����ο� �Է� �ޱ�*/
	for(i=0;i < 4; i++){
		for(j=0; j < 2; j++){
			//�ε����� �������� ǥ��(���)�ϱ� ���ؼ���
			//������ �ε����� 1�� ���ؾ� �Ѵ�.
			//Why? �ε����� 0���� �����ϱ� �����̴�.
			printf("%d�� %dȣ �α���: ", i+1, j+1);
			scanf("%d", &villa[i][j]);
		}
	}
/*
	for(i=0; i < 4; i++){
		popu=0;
		popu = popu + villa[i][0];
		popu = popu + villa[i][1];
		printf("%d�� �α���: %d \n", i+1, popu);
	}
	*/
	/*������ ���� �α��� ����ϱ�*/
	for(i=0; i < 4; i++){
		popu=0;
		for(j=0; j <2; j++){
			popu = popu + villa[i][j];
		}
			printf("%d�� �α���: %d \n", i+1, popu);
	}
}

