#include <stdio.h>
int CelToFah(tem);
int FahToCel(tem);

void main(){
	int option;
	int tem;
	int tem2;

	while(1){
		printf("1�� �Է½� ȭ��->����, 2�� �Է½� ����->ȭ���� ��ȯ�˴ϴ� �Է�: ");
		scanf("%d", &option);
		printf("�ٲ� �µ��� �Է��ϼ���: ");
		scanf("%d", &tem);
		if (option == 1){
			printf("�Էµ� ȭ�� %d ���� ���� %d�� �Դϴ�",tem, FahToCel(tem) );
			break;
		}else if (option == 2){
			printf("�Էµ� ���� %d ���� ȭ�� %d�� �Դϴ�",tem, CelToFah(tem) );
			break;
		}else{
			printf("ó�����ý� 1�� �Ǵ� 2���� �Է��ϼ���.\n");
			continue;
		}
	}
}

int CelToFah(int tem){
	tem = (1.8 * tem) + 32;
	return tem;
}

int FahToCel(tem){
	tem = (tem - 32) / 1.8;
	return tem;
}
