#include <stdio.h>

void main(){
	char sel;
	printf("M ����, A ����, E ���� \n");
	printf("�Է�: ");
	scanf("%c", &sel);
	float my_pi;

	// switch���� ������ ������ ��Ī�� �Ǵ� case�� �̵��� �� ���� �̷������.
	// �׸��� Ư���� break�� ������ �ʴ� �̻� ������ ��� ��ɹ��� �����Ѵ�.
	// switch ()�� ������ �Ϲ������� ������(INTEGRAL) Ÿ���� ����ϴ� ���� ��Ģ�̴�.
	switch(sel){
		case 'M':	// if( sel == 'M' || sel == 'm')
		case 'm':
			printf("Morning \n");
			break;
		case 'A':
			printf("Good ");
		case 'a':
			printf("Afternoon \n");
			break;
		case 'E':
		case 'e':
			printf("Evening \n");
			break;
	}
// switch()�� ������ �Ǽ����̱� ������ ������ ������ �߻��Ѵ�.
/*
	switch(my_pi){
		case 1.11:
			printf("case 1.11 \n");
			break;
		case 3.14:
			printf("case 3.14 \n");
			break;
		default:
			printf("default!\n");
	}
*/
}
